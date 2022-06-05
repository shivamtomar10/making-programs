#include <iostream>
using namespace std;

class c1
{
    int a, b;

public:
    c1()
    {
        a = 3;
        b = 5;
    }
    c1(int x, int y)
    {
        a = x;
        b = y;
    }
   /* void se(c1 &e)
    {
        a=e.a;
        b=e.b;
    }*/
    void disp()
    {
        cout << "The value of a:" << a << endl;
        cout << "The value of b:" << b << endl;
    }
    ~c1()
    {
        cout << "The value of destructor : 0";
    }
};

int main()
{
    c1 a;
    a.disp();
    c1 b(9, 7);//parametrisred form
    b.disp();
    c1 z(a);
    z.disp();

        return 0;
}