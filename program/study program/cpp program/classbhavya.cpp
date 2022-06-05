#include<iostream>
using namespace std;

class s
{
    int x;
    public:
            s(){}
            s(int u)
            {
                x=u;
            }
            void disp();
            s operator+(int n)
            {
                s temp;
                temp.x=this->x+n;
                return (temp);
            }
            s operator++();
            s operator++(int u);
            s operator =(int u);
            s operator*(int y);
            friend s func12(int u,s& h);
};
s s::operator++()       //preincrement
{
    x++;
    return (*this);
}
s s::operator++(int u)      //postincrement
{
    s temp;
    temp=*this;
    cout<<"temp:"<<temp.x<<endl;
    x++;
    return (temp);
}
s s::operator=(int u)
{
    s temp;
    temp.x=this->x+u;
    return temp;
}
s s::operator*(int y)
{
    s temp;
    temp.x=this->x*y;
    return temp;
}
void s::disp()
{
    cout<<"Value of x:"<<x<<endl;
}
s func12(int u,s& h)
{
    h.x=u;
    return h;
}

int main()
{
    s ob1(20),ob2(39),ob3(67);
    
    cout<<"displaying value of obj 1:";
    ob1.disp();
    cout<<"displaying value of obj 2:";
    ob2.disp();
    cout<<"displaying value of obj 3:";
    ob3.disp();
    cout<<endl
        <<endl;

   // cout<<"after caling function of preincrement:";
//
   // ob3=++ob1;
   // ob3.disp();    

   // cout<<"after calling function of post increment:"<<endl;

  //  ob3=ob1++;
  //  ob3.disp();
  //  cout<<endl;
  //  ob1.disp();

    // ob3=ob1=(20);
    // ob3.disp();
// 


  //  ob3=ob1*(4);
  //  ob3.disp();
//


s obt=func12(20,ob2);
obt.disp();
cout<<endl;
ob2.disp();
    return  0;

}