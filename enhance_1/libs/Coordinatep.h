
class Coordinatep
{
public:
    Coordinatep(int x, int y);
    ~Coordinatep();

    void setX(int x);
    int getX() const;
    void setY(int y);
    int getY() const;
    void info();

private:
    int m_iX;
    int m_iY;
};
