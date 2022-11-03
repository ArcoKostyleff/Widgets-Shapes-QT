#ifndef DRAWRECTANGLE_H
#define DRAWRECTANGLE_H

#include <QWidget>
#include <QPainter>
class DrawRectangle : public QWidget
{
public:
    DrawRectangle();

     void paintEvent(QPaintEvent *event) override;
     void SetSide(int sideLength);
     void SetCenter(int x, int y);
private:
     int m_weight{};
     int m_height{};
     int m_x_centr{0};
     int m_y_centr{0};
};

#endif // DRAWRECTANGLE_H
