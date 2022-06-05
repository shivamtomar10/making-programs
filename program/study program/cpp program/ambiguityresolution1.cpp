#include<iostream>
using namespace std;

class c1
{
    int a,b;
    public:
            void setdata(int x, int y);
            void dispdata(void);
            void setprotect(int x,int y)
            {
                c=x;
                d=y;
            }
            void dispprotect(void)
            {
                cout<<"The value of c:"<<c<<endl;
                cout<<"The value of d:"<<d<<endl;
            }
    protected:
            int c,d;        
          
};
void c1::setdata(int x, int y)
{
    a=x;
    b=y;
}
void c1::dispdata(void)
{
    cout<<"The value of a:"<<a<<endl;
    cout<<"The value of b:"<<b<<endl;
}
class c2:public c1
{
    private:
            int x, y;
    public:
            void setprotect(int x,int y)
            {
                c=x;
                d=y;
                cout <<"Hello everyone ";
            }

};

int main()
{
    c2 s;
    s.setprotect(2,3);
    s.dispprotect();
    return 0;
}