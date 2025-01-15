#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->calculateButton, &QPushButton::clicked, this, &MainWindow::calculateCalories);

    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveReport);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculateCalories()
{

    double height = ui->heightInput->text().toDouble();
    double weight = ui->weightInput->text().toDouble();
    int age = ui->ageInput->text().toInt();
    QString gender = ui->genderComboBox->currentText();

    double calories = 0.0;



    if (gender == "Мужчина") {
        calories = 88.36 + (13.4 * weight) + (4.8 * height) - (5.7 * age);
    } else {
        calories = 447.6 + (9.2 * weight) + (3.1 * height) - (4.3 * age);
    }


    ui->resultLabel->setText("Базовые калории: " + QString::number(calories, 'f', 2));
}

void MainWindow::saveReport()
{

    QString report = "Отчет о расчете калорий:\n";
    report += "Рост: " + ui->heightInput->text() + " см\n";
    report += "Вес: " + ui->weightInput->text() + " кг\n";
    report += "Возраст: " + ui->ageInput->text() + " лет\n";
    report += "Пол: " + ui->genderComboBox->currentText() + "\n";
    report += "Результат: " + ui->resultLabel->text() + "\n";


    QFile file("calorie_report.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << report;
        file.close();
        QMessageBox::information(this, "Сохранение", "Отчет успешно сохранен!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось сохранить отчет!");
    }
}
