#include <iostream>
using namespace std;
class c1;
class c2
{
    int x, y;

public:
    void func1(c1, c1);
   

    void func2()
    {
        cout << "\nhello eyeryone ";
    }
};

class c1
{
    int a, b;

public:
    void func1(int x, int y)
    {
        a = x;
        b = y;
    }
    void func2()
    {
        cout << "the value of a:" << a << endl;
        cout << "the value of b:" << b << endl;
    }
    //friend class c2;            //declaring whole class as friend
     friend void c2::func1(c1 t, c1 u); //declaring particular function of a class
};

void c2::func1(c1 t, c1 u)
{
    cout << "the value of real part:" << t.a + u.a << endl;
    cout << "the value of imaginary part:" << t.b + u.b << endl;
}

int main()
{
    c1 s, z;
    s.func1(2, 3);
    s.func2();

    z.func1(4, 5);
    z.func2();

    c2 d;
    d.func1(s,z);



    return 0;
}