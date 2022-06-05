#include<iostream>
using namespace std;
//template<class t,class u>
//void func1(t a, u b)
//{
//    cout<<"value:"<<a<<endl;
//    cout<<"value:"<<b;
//}
//void func1(int a,char ch)
//{
//    cout<<"hello everyone ";
//}
template<class t=int,class u=char>
class shiv
{
    t a;
    u b;
    public:
            void disp(int x,char y);
};
template<class t=int,class u=char>
void shiv<>::disp(int x,char y)
{
    a=x;
    b=y;
    
    cout<<"the value is ":<<a;
    cout<<"the value is ":<<b;

}

int main()
{
    //int a=3;
    //char ch='g';
    //func1(a,ch);
    shiv<> sh;
    sh.disp(2,'h');

    return 0;
}