#include<iostream>
using namespace std;

int main()
{
    int p,q;
    cout<<"Enter the first number:";
    cin>>p;
    cout<<"Enter the second number:";
    cin>>q;
    try
    {
        if(q==0)
        throw(0);
        else
        {
            cout<<"p/q:"<<p/q<<endl;
        }
    }
    catch(int x)
    {
        cout<<"the value of q can't be zero"<<endl;
    }
    return 0;
}