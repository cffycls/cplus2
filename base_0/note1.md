﻿﻿1、数组（纯粹相同类型元素）
- 一维数组：double balance[5] = {1000.0, 2.0, 3.4};；
- 多维数组：
    int a[3][4] = {  
     {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
     {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
     {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
    };
2、字符串
- 定长字符串
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //或
    char greeting[] = "Hello";
- 常用函数
    strcpy( dst_str, src_str )              //覆盖到
    strcat( str1, str2 )                    //连接
    strlen( s1 )
    strcmp(s1, s2);
        //如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0
    strchr(s1, ch)
        //返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置：即返回之后的字符串是 s1[:xx]
    strstr(s1, s2)
        //同上，返回字符串余下所有（包含）
3、指针与引用（地址vs别名）
- 变量定义：
    int * p;                                  //指针：第一个数组元素、或区块的第一个字符的地址
    int ** pptr;
    int * p[10];
    int & q = a;                              //引用：变量别名、修改则拷贝新到副本
- 传递函数值、返回值
    double * getAverage(int *arr, int size);
    double * getAverage(int *arr, int size){}    
    void & swap(int & x, int & y);
    void & swap(int & x, int & y){}
4、时间标准库
- clock()
       start_t = clock();
       for(i=0; i< 10000000; i++) { }
       end_t = clock();
       total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
5、结构体
- .点访问成员
- 定义
    struct Books
    {
       char  title[50];
       char  author[50];
       char  subject[100];
       int   book_id;
    };
    //定义结构类型、同时定义一个变量（空）
    struct Books
    {
       char  title[50];
       char  author[50];
       char  subject[100];
       int   book_id;
    } book;
- 结构类型的指针参数
    void printBook( struct Books * book );
    void printBook( struct Books *  book )
    {
       cout << "书标题  : " << book->title <<endl;
       cout << "书作者 : " << book->author <<endl;
       cout << "书类目 : " << book->subject <<endl;
       cout << "书 ID : " << book->book_id <<endl;
    }
 6、const、&和指针地址
 - const修饰指针
    int x=3; int const * p=&x; 
    //p=&y 正确：const*p是 别名的地址只读[不变]，别名的值可以改变
    //*p=4 错误：别名的地址只读
        变量名         存储地址            存储内容
        x             &x                3
        p             &p[const*只读]     &x
    int x=3; int * const p=&x; 
    //p=&y 错误：const p是 别名不变，内容不可变
        变量名         存储地址            存储内容
        x             &x                3
        p             &p                &x[const只读]
    const int x=3; const int * const p=&x;
    //p=&y; p=4错误：别名只读、别名的地址也只读
        变量名         存储地址            存储内容
        x             &x                3[const只读]
        p             &p[const只读]      &x[const只读]
  - const修饰引用
    int x=3; int const & y=x; 
    //x=10 正确
    //y=20 错误：y的存储地址锁定，无法产生内容改变
        变量名         存储地址            存储内容
        x             &x                3
        y             &x[const只读]      -(暂无->>差异副本)
    这样定义则把 y 锁定到 x ,且无法定义副本改变
 - 注意内容锁定只读、还是指针或别名只读
    int x=3; int const * y=&x; 
    //*y=5 错误：y的指针锁定
        变量名         存储地址            存储内容
        x             &x                3
        y             &y[const只读]      &x
    这样同样把 y 锁定到 &x ,不变
    int const x=3;
    //int * y=&x 错误：x的值与地址在初始化后都只读，
    使用 int const * y=&x 或 int const * const z=&x
    