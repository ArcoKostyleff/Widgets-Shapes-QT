#include "DrawRectangle.h"
#include <QDebug>

DrawRectangle::DrawRectangle()
{

}

void DrawRectangle::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap));
    painter.setBrush(QBrush(Qt::red, Qt::SolidPattern));

     painter.drawRect(100, 100, this->m_height, this->m_weight);
     qDebug()<<"yiy";
}

void DrawRectangle::SetSide(int sideLength)
{
this->m_height = sideLength;
    this->m_weight = sideLength;
}

void DrawRectangle::SetCenter(int x, int y)
{
this->m_x_centr = x;
    this->m_y_centr = y;
}
