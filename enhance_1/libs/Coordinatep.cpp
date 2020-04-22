//
// Created by cffyc on 2020/4/20.
//

#include "Coordinatep.h"
#include <iostream>
using namespace std;

Coordinatep::Coordinatep(int x, int y)
{
    m_iX = x;
    m_iY = y;
    cout << "Coordinate init (" << m_iX << ", " << m_iY << ")" << endl;
}
Coordinatep::~Coordinatep()
{
    cout << "~ Coordinate destory " << m_iX << ", " << m_iY << endl;
}
void Coordinatep::setX(int x)
{
    m_iX = x;
}
int Coordinatep::getX() const
{
    return m_iX;
}
void Coordinatep::setY(int y)
{
    m_iY = y;
}
int Coordinatep::getY() const
{
    return m_iY;
}
void Coordinatep::info()
{
    cout << "(" << m_iX << ", " << m_iY << ")" << endl;
}