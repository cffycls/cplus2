﻿﻿1、对象数组
- 实例化
    Coordinate coord[3];                    //栈实例化，自动回收
    coord[1].m_iX = 10;
    Coordinate * p = new Coordinate[3];     //堆实例化
    p[0].m_iY = 20;
    p[1].m_iY = 111;
    p++;
    p->m_iY = 30;                           //相当于 (p+0).m_iY=30，指针变量p的++相当于移位
    cout << & (p[0]) << "\t" << & (p[1]) << "\t" << & (p[2]) << "\t" << & (p[3]) << endl;
    cout << p++ << "\t" << p++ << "\t" << p++ << "\t" << p << endl; //结果同上，移位、下面不同
    cout << & (p[0]) << "\t" << & (p[1]) << "\t" << & (p[2]) << "\t" << & (p[3]) << endl;
    cout << --p << "\t" << p++ << "\t" << p++ << "\t" << p << endl; //结果同上，移位、下面不同
    cout << p->m_iY << ", " << p[1].m_iY << endl; //随机数, 0
    
    delete []p;
    p = NULL;