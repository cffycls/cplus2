//
// Created by cffyc on 2020/4/22.
//
#include <iostream>
using namespace std;
class CoordinateX
{
public:
    CoordinateX(int x, int y);
    ~CoordinateX();
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void info();
private:
    int m_iX;
    int m_iY;
};

CoordinateX::CoordinateX(int x, int y)
{
    m_iX = x;
    m_iY = y;
    cout << "CoordinateX init (" << m_iX << ", " << m_iY << ")" << endl;
}
CoordinateX::~CoordinateX()
{
    cout << "~ CoordinateX destory " << m_iX << ", " << m_iY << endl;
}
void CoordinateX::setX(int x) {  m_iX = x;}
int CoordinateX::getX(){    return m_iX;}
void CoordinateX::setY(int y) {  m_iY = y;}
int CoordinateX::getY(){    return m_iY;}
void CoordinateX::info()
{
    cout << "(" << m_iX << ", " << m_iY << ")" << endl;
}

int main()
{
    system("chcp 65001 > nul");

    //虚拟系统 this 首参的编译器工作：如果有内部函数、属性调用则自动进行[以区分位于不同对象]
    // a.const修饰*[指向]&[引用]符号时：[变量的：名-址-值 >>值不变]
    CoordinateX coor(3,5);
    const CoordinateX & coor2 = coor; // &coor2锁定 => coor锁定，coor2的内容锁定、可以有多个coor2定义
    const CoordinateX * pCoor = & coor; // *pCoor锁定 => pCoor的地址不变、值可变，coor地址不可变、值可变
    cout << "& coor2: " << &coor2 << "; * pCoor: " << pCoor << endl;
    coor.info();
    coor.setX(33); //coor地址不可变、值可变
    cout << coor.getX() << endl;
    //coor2.getY(); // error: 将'const CoordinateX'作为'this'参数丢弃限定词
    //pCoor->getX(); // error: 同上
    //coor2，pCoor set更不可能
    CoordinateX coorP(22,33);
    pCoor = & coorP; //pCoor的地址不变、值可变

    // b.const修饰变量时：[变量的：名-址-值 >>值不变]
    CoordinateX door(3,5);
    //CoordinateX & const door2 = door; // error: 'const'限定符不能应用于'CoordinateX&'，[coor2无内容不可锁定]
    CoordinateX * const pDoor = & door; // pCoor锁定 => pCoor指向[指针内容]不可变，coor1地址不可变、值可变
    coor.info();
    coor.setY(55);
    cout << door.getY() << endl;
    CoordinateX doorP(22,33);
    //pDoor = & doorP; //error: 分配只读变量“pDoor”，[pCoor指向||指针内容不可变]
    pDoor->setX(66);
    cout << door.getX() << endl; //pDoor -> door

    //3.如果上面coor、door改为常对象，下面随意，是常量间的引用、指向操作

    return 0;
}