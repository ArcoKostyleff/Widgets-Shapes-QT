#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QGraphicsScene>
#include "Rectangle.h"
#include "DrawRectangle.h"
#include <DrawCircle.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public QPainter
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_coord_editingFinished();

    void on_tabWidget_currentChanged(int index);

    void on_stackedWidget_currentChanged(int arg1);

    void on_x_coord_slot_textChanged(const QString &arg1);

    void on_y_coord_slot_textChanged(const QString &arg1);

    void on_sideLengt_slot_textChanged(const QString &arg1);

    void on_drawButton_clicked();

    void on_drawButton_2_clicked();

    void on_sideLengt_slot_2_textChanged(const QString &arg1);

private:
    QGraphicsScene *scene;
    Ui::MainWindow *ui;
    void paintEvent(QPaintEvent *);
    Rectangle *m_rect_ptr;
    DrawCircle *m_cr_ptr;
    DrawRectangle *m_dr_ptr;
};
#endif // MAINWINDOW_H
