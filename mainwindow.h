#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QLayout>
#include<QPushButton>
#include<QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QWidget *mywidget;
    QLineEdit *outputNummer;
    QPushButton *num9;
      QPushButton *num8;
        QPushButton *num7;
          QPushButton *num6;
            QPushButton *num5;
              QPushButton *num4;
                QPushButton *num3;
                  QPushButton *num2;
                    QPushButton *num1;
                      QPushButton *num0;
                        QPushButton *point;
                          QPushButton *equal;
                            QPushButton *opAdd;
                             QPushButton *opMinus;
                              QPushButton *opMal;
                               QPushButton *opDiv;
                                QPushButton *opDel;

      QVBoxLayout *qvboxl;

      //Haben wir 5 Ebene, deswegen 5 Horizontale layout
      QHBoxLayout * hlayout1;
      QHBoxLayout * hlayout2;
      QHBoxLayout * hlayout3;
      QHBoxLayout * hlayout4;
      QHBoxLayout * hlayout5;

};

#endif // MAINWINDOW_H
