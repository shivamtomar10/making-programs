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
          void func2()
          {
              cout<<"a:"<<a<<endl;
              cout<<"b:"<<b<<endl;
          }

};


int main()
{
    c1 sa;
    c1* ptr;
    ptr=&sa;
    ptr->func1(2,3);
    (*ptr).func2();
    
    //cout<<"address of s:"<<p;*/     //has to check
    
    return 0;

}

