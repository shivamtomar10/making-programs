#include<iostream>
using namespace std;

template<class e=int ,class d=float,class r=void >       //default parameter
class s1
{
    e a;
    d f;
   
    public:
            r func1(e a)
            {
                this->a=a;
                
            }
            r func2(){
                cout<<"hello everyone";
                cout<<"\n"<<a;
            }
};

int main()
{
    s1<> oiu;
    oiu.func1(2);
    oiu.func2();
    return 0;
}