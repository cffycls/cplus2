
class Array {
public:
    Array(int len);
    ~Array();

    Array * setLen(int len);
    int getLen();
    Array & info();

private:
    int len;

};