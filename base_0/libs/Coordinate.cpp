//
// Created by cffyc on 2020/4/20.
//

#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate() {
    cout << "Coordinate init" << endl;
}
Coordinate::Coordinate(int x, int y) {
    m_iX = x;
    m_iY = y;
    cout << "Coordinate all init " << m_iX << ", " << m_iY << endl;
}
Coordinate::~Coordinate() {
    cout << "~ Coordinate destory " << m_iX << ", " << m_iY << endl;
}
void Coordinate::setX(int x) {
    m_iX = x;
}
int Coordinate::getX() {
    return m_iX;
}
void Coordinate::setY(int y) {
    m_iY = y;
}
int Coordinate::getY() {
    return m_iY;
}
void Coordinate::info() {
    cout << "(" << m_iX << ", " << m_iY << ")" << endl;
}