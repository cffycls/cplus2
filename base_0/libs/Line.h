//
// Created by cffyc on 2020/4/20.
//
#include "Coordinate.h"

class Line {
public:
    Line();
    Line(int x1,int y1,int x2,int y2);
    //Line(int x1,int y1,int x2,int y2):pointA(x1,y1),pointB(x2,y2){};
    ~Line();

    void setPointA(int x,int y);
    Coordinate getPointA();
    void setPointB(int x,int y);
    Coordinate getPointB();
    void info();

private:
    /*Coordinate pointA; //实例化
    Coordinate pointB;*/
    Coordinate * pointA;
    Coordinate * pointB;
};
