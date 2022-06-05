#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number for the factorial";
    cin>>a;
    double  p=1;
    while (a>0 )
    {
        
        p*=a;
        a-=1;
        
    }
    cout<<"your factorial of number is:"<<p<<endl;
    if(a<0)
    cout<<"your input is invalid";
    cout<<endl<<"do you want to continue";
    cout<<endl<<"\"If yes then enter 'y' or press any key to end\"";
    char ch;
    cin>>ch;
    if(ch=='y')
    {
        cout<<main();
    }
    else
    cout<<"thank for using it";
    return 0;

}