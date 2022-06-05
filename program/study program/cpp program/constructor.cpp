#include<iostream>
using namespace std;

class complex1
{
    int a, b;
    public:
           // complex1(void);         //default constructor
            void func1(void);
            complex1(int x,int y){      //parametrised constructor
                a=x;
                b=y;
            }
            complex1(int x,int y,int z){
                a=x;
                b=y;
                cout<<z<<endl;
            }
            
};
/*complex1::complex1(void)
{
    a=14;
    b=5;
}*/
void complex1::func1(void)
{
        cout<<"the value of complex is:"<<a<<" + "<<b<<"i"<<endl;
       // cout<<x<<endl<<y;
}

int main()
{
   // complex1 x,y;
   // x.func1();
    //y.func1();
    //complex1();
    //x.func1();

    //complex1 y(4,7);
    //y.func1();
    complex1 s(1,2,3);
    s.func1();

    return 0;
}