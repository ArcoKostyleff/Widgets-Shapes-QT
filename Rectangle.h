#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QGraphicsItem>
#include <QPainter>
class Rectangle : public QGraphicsItem
{
public:
    Rectangle();
    void SetSide(int sideLength);
    void SetCenter(int x, int y);
    void UpdatePoints();
protected:
    int m_sideLength {0};
    QPoint m_center{};
    QVector<QPoint> m_points {};
    void  paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    QRectF boundingRect() const override;
};

#endif // RECTANGLE_H
