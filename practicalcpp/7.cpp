#include<iostream>
using namespace std;
// GCD with recursion

int func1(int a,int b)
{
    if(b!=0)
    return func1(b,a%b);
    else
    {
        return a;
    }
    return 0;
}
//without recursion is done in study folder 
int main()
{
    int x,y;
    cout<<"Enter the first number:";
    cin>>x;
    cout<<"Enter the second number:";
    cin>>y;
    int z=func1(x,y);
    printf("The gcd of two number with recursion are:""%d",z);
   //without recursion 
    int p;
    if(x>=y)
    {
        for(int i=1;i<=x;i++)
        {
            if(x%i==0 && y%i==0)
            {
                p=i;
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
        cout<<"\nyour input is invlaid";
    }
    cout<<"\nThe GCD of the two numbers without recursion is:"<<z<<endl;
    return 0;
}