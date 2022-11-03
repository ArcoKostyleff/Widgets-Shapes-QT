#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Rectangle.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_rect_ptr = new Rectangle;
    m_dr_ptr = new DrawRectangle;
    m_cr_ptr = new DrawCircle;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){

}

void MainWindow(){

}


void MainWindow::on_lineEdit_coord_editingFinished()
{

}


void MainWindow::on_tabWidget_currentChanged(int index)
{

}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{

}



void MainWindow::on_x_coord_slot_textChanged(const QString &arg1)
{

}


void MainWindow::on_y_coord_slot_textChanged(const QString &arg1)
{

}


void MainWindow::on_sideLengt_slot_textChanged(const QString &arg1)
{
   m_dr_ptr -> SetSide(arg1.toInt());
}


void MainWindow::on_drawButton_clicked()
{
    ui->stackedWidget->addWidget(m_cr_ptr);
    qDebug()<<"drawed" << ui->stackedWidget->count();

}


void MainWindow::on_drawButton_2_clicked()
{
    ui->stackedWidget->addWidget(m_dr_ptr);
    qDebug()<<"drawed" << ui->stackedWidget->count();
}


void MainWindow::on_sideLengt_slot_2_textChanged(const QString &arg1)
{
    m_cr_ptr -> SetRadius(arg1.toInt());
}

