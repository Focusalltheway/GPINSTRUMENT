#ifndef NEWBUTTON_H
#define NEWBUTTON_H
#include<QAbstractButton>
#include<QPixmap>
//#include<QObject>
class ImageButton: public QAbstractButton
{
    Q_OBJECT

public:
    ImageButton(QPixmap normal,QPixmap pressed,QWidget *parent=0);
protected slots:
    void onPressed();
    void onReleased();
protected:
    void paintEvent(QPaintEvent *e);
protected:
    QPixmap m_normal;
    QPixmap m_pressed;
    bool m_bPressed;
};

#endif // NEWBUTTON_H
