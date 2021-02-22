/*
#include <QApplication>
#include <QLabel>
#include <QWidget>
int main(int argc,char* argv[]){
    QApplication app(argc,argv);
    QLabel hello("Hello World"); //some kind of wget
    hello.setWindowTitle("My First Qt Program"); //title
    hello.resize(400,400); //size
    hello.show();  //show
    return app.exec();
}*/
#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include "gettheimage.h"
#include "wrongbook.h"
#include "mythread.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*display the canvas of following which indicated*/
    login l;
    l.show();
/*
      WrongBook w;
      w.show();
      /*Use system method to call for .py file*//*
      system("/usr/bin/python2.7 /home/pi/opencv_test/color_filter/color1");*/
    return a.exec();
}
