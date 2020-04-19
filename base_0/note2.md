﻿﻿1、面向对象
- 类的操作方法必须在其内部实现，如：直接吃肉和使用餐具；
- 除方法外，其他变量、类定义后需要分号结束
2、类外定义
- 类的方法写在类定义的外面，至于直接分开为 xx.h、xx.cpp；
- 类内定义的函数优先选择编译为内联函数（inline修饰），在编译阶段直接替换
    (1)类内定义成员函数，可以不用在函数头部加inline关键字；
    (2)类外定义：`inline` void TV::power(){}；     //推荐写inline
    (3)普通的宏定义函数：由预处理器对进行宏替代；
- 类文件调用，引用 class.cpp[内部引用class.h]
3、内存分区
- 栈区：存放变量类；                 [自动管理]
- 堆区：存放指针类；                 [手动管理]
- 全局区：存储全局变量、静态变量；
- 常量区：string str = "hello"；
- 代码区：存放二进制代码；
4、构造函数
- 本名函数、没有类型修饰符，如果没有定义、系统自动定义空的
- 在类实例化时自动调用
- 重载
    class Student
    {
     public:
        Student(){m_strName = "Jim"}                 //无参构造函数
        Student(string name){m_strName = name}       //重载
    };
- 列表赋值[构造函数初始化]
    class Student
    {
     public:
        Student():m_strName("Jim"),m_iAge(15){}  //此列表先于构造函数执行
    ...
    class Circle
    {
    public:
        Circle():m_dPi(3.14){}                  //常量初始化：Circle类，定义Π
    private:
        const double m_dPi;
        
    };
5、构造函数高级
- 拷贝构造函数：静态、类、引用变量，如果没有定义、系统自动定义空的
    class Student
    {
     public:
        Student(){m_strName = "Jim"}            //无参构造函数
        Student(const Student &stu){}           //拷贝构造函数
    };
- 析构函数：对象销毁自动使用，无参、释放 new 的资源
    class Student
    {
     public:
        Student(){m_strName = "Jim"}            //无参构造函数
        Student(const Student &stu){}           //拷贝构造函数
        ~Student(){}                            //析构函数
    };
- 对象生命历程：申请内存 - 初始化列表 - 构造函数 - 参与运算 - 析构函数 - 释放内存