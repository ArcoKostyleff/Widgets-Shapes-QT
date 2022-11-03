#include "DrawCircle.h"

DrawCircle::DrawCircle()
{

}

void DrawCircle::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::FlatCap));
    painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));

     painter.drawEllipse(100,100, this->m_radius, this->m_radius);

}

void DrawCircle::SetRadius(int radius)
{
this->m_radius = radius;
}

void DrawCircle::SetCenter(int x, int y)
{
    m_x_centr = x;
    m_y_centr = y;
}
