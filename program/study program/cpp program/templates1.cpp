#include<iostream>
using namespace std;

template<class t>
class s1 
{
    t a;
    public:
          void func1(t a, t b)
          {
               this->a=a+b;
          }
          void  func2()
          {
              cout<<"The sum of two number is :"<<a;
          }
};

int main()
{
    s1<int> obj;
    obj.func1(2,3);
    obj.func2();
    return 0;
}