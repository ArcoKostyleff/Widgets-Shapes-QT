#ifndef DRAWCIRCLE_H
#define DRAWCIRCLE_H


#include <QWidget>
#include <QPainter>
class DrawCircle : public QWidget
{
public:
    DrawCircle();

     void paintEvent(QPaintEvent *event) override;
     void SetRadius(int radius);
     void SetCenter(int x, int y);
private:
     int m_radius{0};
     int m_x_centr{0};
     int m_y_centr{0};
};

#endif // DRAWCIRCLE_H
