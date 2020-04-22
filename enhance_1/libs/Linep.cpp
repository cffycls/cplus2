//
// Created by cffyc on 2020/4/20.
//
#include "Linep.h"
#include <iostream>
using namespace std;

Linep::Linep(int x1,int y1,int x2,int y2):pointA(x1,y1),pointB(x2,y2)
{
    cout << "Line ";
    cout << "(" << pointA.getX() << ", " << pointA.getY() << ") => ";
    cout << "(" << pointB.getX() << ", " << pointB.getY() << ") INIT ..." << endl;
}

Linep::~Linep()
{
    cout << "~ Line ";
    cout << "(" << pointA.getX() << ", " << pointA.getY() << ") => ";
    cout << "(" << pointB.getX() << ", " << pointB.getY() << ") DELETE" << endl;
}
void Linep::setA(int x, int y)
{
    /*pointA.setX(x);
    pointA.setY(y);*/
}
void Linep::setB(int x, int y)
{
    pointB.setX(x);
    pointB.setY(y);
}
void Linep::info()
{
    cout << "(" << pointA.getX() << ", " << pointA.getY() << ") => ";
    cout << "(" << pointB.getX() << ", " << pointB.getY() << ")" << endl;
}
void Linep::info() const
{
    cout << "const (" << pointA.getX() << ", " << pointA.getY() << ") => ";
    cout << "(" << pointB.getX() << ", " << pointB.getY() << ")" << endl;
}
