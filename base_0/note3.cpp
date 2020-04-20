//
// Created by cffyc on 2020/4/20.
//
#include <iostream>
using namespace std;

class Coordinate
{
public:
    Coordinate(){
        cout << "Coordinate init" << endl;
    }
    Coordinate(const Coordinate & c){
        cout << "Coordinate copy" << endl;
    }
    ~Coordinate(){
        cout << "~ Coordinate destory" << endl;
    }
    int m_iX;
    int m_iY;
};

int main()
{
    Coordinate coord[3];                    //栈实例化
    coord[1].m_iX = 10;
    Coordinate * p = new Coordinate[3];          //堆实例化
    p[0].m_iY = 10;
    p[1].m_iY = 111;
    p[2].m_iY = 2282;
    p->m_iY = 30; //覆盖p[0].m_iY
    cout << p[0].m_iY << endl; //30
    cout << p[2].m_iY << endl; //0
    //p++;
    cout << & (p[0]) << "\t" << & (p[1]) << "\t" << & (p[2]) << "\t" << & (p[3]) << endl;
    cout << p++ << "\t" << p++ << "\t" << p++ << "\t" << p << endl; //结果同上，移位、下面不同
    cout << & (p[0]) << "\t" << & (p[1]) << "\t" << & (p[2]) << "\t" << & (p[3]) << endl;
    cout << p->m_iY << ", " << p[1].m_iY << endl; //随机数, 0

    cout << --p << "\t" << --p << "\t" << --p << "\t" << p << endl; //指针复位，逆序输出
    cout << p->m_iY << ", " << p[1].m_iY << endl; //30，111

    delete []p;
    p = NULL;

    return 0;
}