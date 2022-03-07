#include<iostream>
using namespace std;

class triangle
{
    int side;
    public:
    triangle(){}
    triangle(int a)
    {
        side=a;
    }
    int cal_area(int s);
    int cal_area(int l,int b);
    int cal_area(int a,int b,int c);
    void operator=(triangle o1);
    int operator==(triangle o1);
    void disp()
    {
        cout<<"The value of side "<<side<<endl; 
    }
};
int triangle::cal_area(int s)
{
    return s*s;
}
int triangle::cal_area(int l,int b)
{
    return l*b;
}
int triangle::cal_area(int a,int b,int c)
{
    return a*b*c;      // taking frequent area only for showing overloaded data function
}
void triangle::operator=(triangle o1)
{
    cout<<"value of side "<<this->side<<endl;
    cout<<"value of side "<<o1.side<<endl;
    this->side=o1.side;

}
int triangle::operator==(triangle o1)
{
    if(o1.side==(*this).side)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
   /* triangle t1,t2,t3;
    int a=t1.cal_area(2);
    cout<<"Area of square:"<<a<<endl;
    int b=t2.cal_area(3,4);
    cout<<"Area of triangle:"<<b<<endl;

    int c=t3.cal_area(2,3,4);
    cout<<"Area of frequent figure:"<<c<<endl;*/

    triangle t4(8);
    triangle t5(6);
    t5.disp();
    t5=t4;
    t5.disp();//change of value of t5 object after assignment of t4 object value
   
    int z=t5==t4;
    cout<<z;
    return 0;
}