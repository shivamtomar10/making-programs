#include<iostream>
using namespace std;
//without recursion finding of gcd
int main()
{
    int x=0,y=0;
    cout<<"Enter the first number";
    cin>>x;
    cout<<"Enter the second number";
    cin>>y;
    int z;
    if(x>=y)
    {
        for(int i=1;i<=x;i++)
        {
            if(x%i==0 && y%i==0)
            {
                z=i;
            }
        }
        
    }
    else if(x<y)
    {
         for(int i=1;i<=y;i++)
        {
            if(x%i==0 && y%i==0)
            {
                z=i;
            }
        }

    }

    else
    {
        cout<<"your input is invlaid";
    }
    cout<<"The GCD of the two numbers is:"<<z<<endl;
    return 0;
}