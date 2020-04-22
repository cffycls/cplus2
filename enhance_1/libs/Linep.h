#include "Coordinatep.h"

class Linep
{
public:
    Linep(int x1,int y1,int x2,int y2);
    ~Linep();
    void setA(int x,int y);
    void setB(int x,int y);

    void info();
    void info() const;

private:
    const Coordinatep pointA;
    Coordinatep pointB;
};