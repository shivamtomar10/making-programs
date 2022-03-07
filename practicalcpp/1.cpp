#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    cout<<"Enter the value of n:";
    double n;
    cin>>n;
    if(n>0)
    {
        double sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                sum+=1/(pow(i,i));
            }
            else if(i%2==0)
            {
                sum-=1/pow(i,i);
            }
        }
        cout<<"\nThe series answer is:"<<sum<<endl;
    }
    return 0;
}