#ifndef QVIDEOWIDGET_H
#define QVIDEOWIDGET_H

#include <QWidget>
#include <QColor>
#include <QPainter>
#include <QMouseEvent>

/*************************************************************
 *       Video Widget
 *************************************************************
 *
 *  Author         :Yoohoo   wand_niu@live.com   2016-9-9
 *
 *
 *  This class only use to play or display video,if your want
 *  get HWND which it is from winId().
 *
 *
 *
 *
 *
 *
 *
 *
 ***************************************************************/



class QVideoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QVideoWidget(QWidget *parent = 0);
    virtual void setBackgroundColor(QColor color);
signals:

public slots:

protected:
    QColor bkcolor;
    /*record the mouse left button is pressed ?*/
    bool   isPressed;
protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent* event);
};

#endif // QVIDEOWIDGET_H

















