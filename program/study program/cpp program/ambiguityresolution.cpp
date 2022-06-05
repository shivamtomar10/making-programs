#include<iostream>
using namespace std;

class c1
{
    int a,b;
    public:
            void greet(void)
            {
                cout<<"hello everyone ";
            }
           /* void setdata(int x,int y)
            {
                a=x;
                b=y;

            }
            void print_data
            {
                cout<<"The value of a:"<<a;
                cout<<"The value of b:"<<b;
            }*/
};
class c2
{
    int c,d;
    public:
            void greet(void);
            /*void setdata(int x,int y);
            void print*/

};
void c2::greet(void)
{
    cout<<"HELLO my dear beautiful girl";
}
class c3:public c1,public c2
{
    public:
            void greet(void)
            {
                c1::greet();        //calling of c1 class functin(member)
                c2::greet();             //calling of c2 class functin(member)
            }
           
};

int main()
{
    c3 s;
    s.greet();
    return 0;
}