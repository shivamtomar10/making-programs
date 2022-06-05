#include<iostream>
using namespace std;

class c1
{
    int a,b;
    int salary;
    public:
            void func1(int x,int y,int z);
            void func2();
};
void c1 :: func1(int x,int y,int z)
{
    a=x;
    b=y;
    salary=z;

}
void c1::func2()
{
    cout<<"The value of a :"<<a<<endl;
    cout<<"The value of b :"<<b<<endl;
    cout<<"The value of salary :"<<salary<<endl;
}
class c2:public c1
{
    string name;
    double  ph_no;
    public:
            void setdata(string t, double a)
            {
                name=t;
                ph_no=a;

            }
            void getdata()
            {
                cout<<"The value of employee name:"<<name<<endl;
                cout<<"The value of employee ph_no"<<ph_no<<endl;
            }

            
};

int main()
{
    c2 sh;
    sh.func1(2,3,4);
    sh.func2();
    sh.setdata("shivam tomar",7303021049);
    sh.getdata();
    return 0;
}
