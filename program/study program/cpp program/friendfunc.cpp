#include<iostream>
using namespace std;

class c1
{
    int a,b;
    public:
            void func1(int x,int y)
            {
                a=x;
                b=y;
            }
            void func2(void);
            friend void func3(c1 o1, c1 o2);        //friend function 
};
void c1::func2()
{
    cout<<"the value of a:"<<a<<endl;
    cout<<"the value of b:"<<b<<endl;
}   
void func3(c1 o1,c1 o2)
{
    //c1 o3;
    cout<<"the value of real part:"<<o1.a+o2.a<<endl;
    cout<<"the value of imaginary part:"<<o1.b+o2.b<<endl;
    //cout<<o3.func1(3,4);
}


int main()
{
    c1 x,y;
    x.func1(7,8);
    x.func2();
    y.func1(9,6);
    y.func2();
    func3(x,y);
    return 0;
}