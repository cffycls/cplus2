//
// Created by cffyc on 2020/4/20.
//

class Coordinate {
public:
    Coordinate();
    Coordinate(int x, int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
    void info();

private:
    int m_iX;
    int m_iY;
};
