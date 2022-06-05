#include<iostream>
using namespace std;

class student 
{
    int x;
    public:
    student()
    {}
    student(int a)
    {
        x=a;
    }
    student operator+(student o1)
    {
        student temp;
        temp.x=x+o1.x;
        return temp;
    }
    void disp()
    {
        cout<<"x="<<x<<endl;
    }

};

int main()
{
    student s1(2);
    student s2(3);
    student s3;
    s3=s1+s2;
    s1.disp();
    s2.disp();
    s3.disp();
    return 0;
}