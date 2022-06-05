#include<iostream>
using namespace std;

class c1                                
{
    int a,b;
    float salry;
    public:
            void func1(int x,int y)
            {
                a=x;
                b=y;
            }
            void disp()
            {
                cout<<"The value of a:"<<a<<endl;
                cout<<"The value of b:"<<b<<endl;
            }
    protected:
            int c,d;


};
class c2
{
    int x,y;
    protected:
            string d;
    public:
            void funct1(int a,int b,string e)
            {
                x=a;
                y=b;
                d=e;
            }
            void disp1()
            {
                cout<<"The value of x:"<<x<<endl;
                cout<<"The value of y:"<<y<<endl;
                cout<<"The value of name:"<<d<<endl;
            }

};
class c3:private c1,private c2
{
    public:
            void allset()
            {
                func1(2,4);
                funct1(5,6,"shivam");

            }
            
            void alldisp()
            {
                disp();
                disp1();
            }
};

int main()
{
    c3 v;
    v.allset();
    v.alldisp();
    return 0;
}
/*              private declaration     public declarartion    protected declarartion
protected       protected                   protected               protecetd
public          private                     public                  public
private         not inherited               not inherited           not inherited*/
