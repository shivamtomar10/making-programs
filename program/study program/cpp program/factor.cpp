#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number for which you want the factors";
    int x=0;
    cin>>x;
    int y=0;
    cout<<"The factor of this number are:"<<endl;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            y=i;
            cout<<y<<" ";
        }
    }
    return 0;
}