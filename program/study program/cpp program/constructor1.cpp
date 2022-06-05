#include<iostream>
using namespace std;
class c1        //base class
{
    int a,b;
    int salary;
    public:
            void func1(int x,int y,int z)
            {
                a=x;
                b=y;
                salary=z;
            }
            
            void func2()
            {
                cout<<"the value of a:"<<a<<endl;
                cout<<"the value of b:"<<b<<endl;
                cout<<"the value of salary:"<<salary<<endl;
            }

};
class c2:private c1 //derived class of single inheritance class type
{
    int c,d;
    public:
            void disp()
            {
                func1(2,3,4);
                func2();
            }
            void set(int x,int y)
            {
                c=x;
                d=y;
            }
            void apdisp()
            {
                cout<<"the value of c:"<<c<<endl;
                cout<<"the value of d:"<<d<<endl;
            }
};

int main()
{
    c2 a;
    a.disp();
    a.apdisp();
    return 0;
}