#include <iostream>
using namespace std;

int main()
{
   /* int x=0;
    for(x;x<=5;x++)
    {
        cout<<"hello everyone\n";
    }
    cout<<x;*/
    int a=0;
    float t=0;
    cout<<"enter the number for test of even";
    cin>>a;
    t=a%2;
    if(t==0)
    {
        cout<<"your number: "<<a<<" is even ";
    }
    else
    cout<<"your number: "<<a<<" is odd ";

    
}