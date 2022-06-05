#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Hello everyone .\n"<<"This for testing of vote if a person is eligible or not";
    cin>>a;
    if(a>0 && a<18)
    {
        cout<<"you are not eligible for vote";
        int b=(18-a);
        cout<<"hence you have to wait for "<<b;
    }
    if(a<0)
    {
        cout<<"your age is not valid";
    }
    if(a>18)
    {
        cout<<"you are eligible for vote";
       
    }
    
}