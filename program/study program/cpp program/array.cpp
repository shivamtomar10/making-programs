#include<iostream>
using namespace std;

int main()
{
   /* char a[5]={'a','b','c','d'};
   for(int i=0;i<=4;i++)
    {  
        cout<<"The value at index "<<i<<":"<<a[i]<<endl;
          a[i++]=a[i+1]+1;
    }
    cout<<a[2];*/
    int a[5];
    int n;
    cout<<"Enter five values into the array";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value to be checked";
    cin>>n;
    int i=0;
    for(;i<5;i++)
    {
        if(a[i]==n)
        {
            cout<<"Value find at indexed:"<<i;
            return 0;
        }
    }
    
    if(i==5)
        cout<<"value not find at any place";
    




}
