//
// Created by cffyc on 2020/4/20.
//
#include "Line.h"
#include <iostream>
using namespace std;

Line::Line() {
    cout << "Line init" << endl;
}
/*Line::Line(int x1, int y1, int x2, int y2) {
    cout << "Line init..." << endl;
    pointA.setX(x1);
    pointA.setY(y1);
    pointB.setX(x2);
    pointB.setY(y2);*//*
    //或者
    Line::setPointA(x1,y1);
    Line::setPointB(x2,y2);*//*
    cout << "Line all init" << endl;
}*/
/*Line::Line(int x1, int y1, int x2, int y2):pointA(x1,y1),pointB(x2,y2) {
    cout << "Line all init" << endl;
}*/

Line::Line(int x1, int y1, int x2, int y2) {
    pointA = new Coordinate(x1, y1);
    pointB = new Coordinate(x2, y2);
    cout << "Line all init" << endl;
}

/*Line::~Line() {
    cout << "~ Line destory" << endl;
}*/
Line::~Line() {
    delete pointA;
    pointA = NULL;
    delete pointB;
    pointB = NULL;
    cout << "~ Line destory" << endl;
}
/*
void Line::setPointA(int x, int y) {
    pointA.setX(x);
    pointA.setY(y);
}
Coordinate Line::getPointA() {
    cout << "Line.pointA: (" << pointA.getX() << ", " << pointA.getY() << ")" << endl;
    return pointA;
}
void Line::setPointB(int x, int y) {
    pointB.setX(x);
    pointB.setY(y);
}
Coordinate Line::getPointB() {
    cout << "Line.pointB: (" << pointB.getX() << ", " << pointB.getY() << ")" << endl;
    return pointB;
}
void Line::info() {
    cout << "(" << pointA.getX() << ", " << pointA.getY() << ") => ";
    cout << "(" << pointB.getX() << ", " << pointB.getY() << ")" << endl;
}*/
void Line::info() {
    cout << "(" << pointA->getX() << ", " << pointA->getY() << ") => ";
    cout << "(" << pointB->getX() << ", " << pointB->getY() << ")" << endl;
}