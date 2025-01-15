#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Добавляем объявления для функций, которые будут вызываться по кнопкам
    void calculateCalories();  // Для расчета калорий
    void saveReport();         // Для сохранения отчета

private:
    Ui::MainWindow *ui;        // Интерфейс, который будет управлять элементами в окне
};

#endif // MAINWINDOW_H
