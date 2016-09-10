#include "QVideoWidget.h"

#include <QMessageBox>
QVideoWidget::QVideoWidget(QWidget *parent) :
    QWidget(parent)
{
    /*default the background color is purge black*/
    bkcolor=QColor(0,0,0);
    /*the left button is not pressed */
    isPressed=false;
}

void QVideoWidget::setBackgroundColor(QColor color)
{
    bkcolor=color;
}

void QVideoWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.fillRect(rect(),bkcolor);

    if(isPressed)
    {
        QBrush brush(QColor(0,255,0));
        painter.setPen(QPen(brush,2));
        painter.drawRect(rect());
    }
}

void QVideoWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        isPressed=!isPressed;
        //QMessageBox::warning(this,"tip","lbutton down",0,0);
    }
    else if(event->button()==Qt::RightButton)
    {

    }
    else
        QWidget::mousePressEvent(event);
}
