#include "Rectangle.h"

Rectangle::Rectangle() : QGraphicsItem()
{

}

void Rectangle::SetSide(int sideLength)
{
    m_sideLength = sideLength;
}

void Rectangle::SetCenter(int x, int y)
{
    m_center.setX(x);
    m_center.setX(y);
}

void Rectangle::UpdatePoints()
{
    m_points.push_back(QPoint(-m_sideLength, m_sideLength));
    m_points.push_back(QPoint(-m_sideLength, -m_sideLength));
    m_points.push_back(QPoint(m_sideLength, -m_sideLength));
    m_points.push_back(QPoint(m_sideLength, m_sideLength));
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon pol;
    for(auto dot : m_points){
        pol << dot;
    }
    painter->drawPolygon(pol);
}

QRectF Rectangle::boundingRect() const
{
    return QRectF(-100, -100, 100, 100);
}
