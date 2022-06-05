#include<iostream>
using namespace std;

int area(int x)
{
    int a1=x*x;
    return a1;
}
int area(int x,int y)
{
    int a1=x*y;
    return a1;
}
int area(int x ,int y,int z)
{
    int a1=2*z*(x+y);
    cout<<"Curved surface area is :"<<a1;
    return 0;
}


int main()
{
    //fuction overloading 
    int a,b,c;
    cin>>a>>b>>c;
    int a2=area(a);
    int a3=area(a,b);
    cout<<a2<<endl<<a3;
    
    area(a,b,c);
    
    return 0;
}