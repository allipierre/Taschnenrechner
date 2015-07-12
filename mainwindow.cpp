#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

mywidget=new QWidget();
    outputNummer=new  QLineEdit();
   num9=new   QPushButton("9");
    num8=new   QPushButton("8");
     num7=new   QPushButton("7");
      num6=new   QPushButton("6");
       num5=new   QPushButton("5");
        num4=new   QPushButton("4");
         num3=new   QPushButton("3");
          num2=new   QPushButton("2");
           num1=new   QPushButton("1");
            num0=new   QPushButton("0");

                       point=new QPushButton(".") ;
                          equal=new QPushButton("=");
                           opAdd=new QPushButton ("+");
                            opMinus=new QPushButton("-");
                              opMal=new QPushButton("*");
                              opDiv=new QPushButton("/");
                              opDel=new QPushButton("AC");

     qvboxl=new QVBoxLayout();



       hlayout1=new QHBoxLayout();
        this->hlayout1->addWidget(this->outputNummer);
        this->hlayout1->addWidget(this->opDel);
        this->qvboxl->addLayout(this->hlayout1);

        hlayout2=new QHBoxLayout();
        this->hlayout2->addWidget(this->num7);
        this->hlayout2->addWidget(this->num8);
        this->hlayout2->addWidget(this->num9);
        this->hlayout2->addWidget(this->opAdd);
        this->qvboxl->addLayout(this->hlayout2);


       hlayout3=new QHBoxLayout();
       this->hlayout3->addWidget(this->num4);
       this->hlayout3->addWidget(this->num5);
       this->hlayout3->addWidget(this->num6);
       this->hlayout3->addWidget(this->opMinus);
       this->qvboxl->addLayout(this->hlayout3);

       hlayout4=new QHBoxLayout();
       this->hlayout4->addWidget(this->num1);
       this->hlayout4->addWidget(this->num2);
       this->hlayout4->addWidget(this->num3);
       this->hlayout4->addWidget(this->opMal);
       this->qvboxl->addLayout(this->hlayout4);

       hlayout5=new QHBoxLayout();
       this->hlayout5->addWidget(this->num0);
       this->hlayout5->addWidget(this->point);
       this->hlayout5->addWidget(this->equal);
       this->hlayout5->addWidget(this->opDiv);
       this->qvboxl->addLayout(this->hlayout5);

       mywidget->setLayout(this->qvboxl);
       this->setCentralWidget(mywidget);
}

MainWindow::~MainWindow()
{

}
