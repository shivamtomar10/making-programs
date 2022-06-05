#include <iostream>
using namespace std;

int main()
{
    cout<<"hello everyone "<<"\n now this is a calculator"<<endl<<"make fun of it ";
    cout<<"\nthere are only four operator "<<endl<<"which are +,-,*,/";
    cout<<"\nchoose one of them"<<"\n1 for +,2 for -,3 for *,4 for /";
    cout<<"enter the operation";
    
     int x;
    cin>>x;
    cout<<"\nenter the operands for the operations";
    cout<<"\nonly integer values must be entered";
    cout <<"\nenter first operand ";
    int n1;
    cin>>n1;
    cout<<"enter the second operand";
    int n2;
    cin>>n2;

   
    if(x==1)
    {
      int sum=0;
      sum=n1+n2;
       cout<<"the sum of two numbers is:"<<sum;

    }
    else if(x==2)
    {
      int diff=0;
      diff=n1-n2;
      cout<<"the  difference of two numbers is:"<<diff;

    }
    else if (x==3)
    {
      int mul=0;
      mul=n1*n2;
      cout<<"the multiply of two numbers is :"<<mul;

    }
    else if (x==4)
    {
      int div=0;
      div=n1/n2;
      cout<<"the division of two numbers is :"<<div;

    }
    else
    {
      cout <<"your input is invalid"<<"write the correct input ";

    }
    cout<<"\nif you waant to continue enter 1 or 0 number to end  ";
    int w;
    cin>> w;
    if(w==1)
    {
       cout<<main();
    }
    else
    cout<<"thanks for using it";
}