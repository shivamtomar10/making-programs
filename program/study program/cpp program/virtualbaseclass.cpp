#include<iostream>
using namespace std;

class c1
{
    int a,b;
    public:
            int roll_no;
            void func1(int x,int y,int roll)
            {
                a=x;
                b=y;
                roll_no=roll;
            }
            void func2()
            {
                cout<<"The value of a:"<<a<<endl;
                cout<<"The value of b:"<<b<<endl;
                cout<<"The value of rollno:"<<roll_no<<endl;
            }
};
class c2:public virtual c1
{
    int c,d;
    int score;
    public:
           
            void disp1()
            {
                cout<<"Score is:"<<score<<endl;
            }
            void setdata(int x,int y,int z)
            {
                c=x;
                d=y;
                score=z;
                
            }


};

class c3:public virtual c1
{
    public:
    void disp()
    {
        cout<<"I am here at : c3"<<endl;
    }

};
class c4:public  virtual c2,public virtual c3
{
    public:
        void disp()
        { 
            
            cout<<"I am at here:c4"<<endl;
            cout<<roll_no;
        }
};

int main()
{
    c4 s;
    s.func1(2,3,40);
    s.func2();
    s.setdata(2,3,4);
    s.disp1();
    s.disp();
    return 0;

}