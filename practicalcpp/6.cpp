#include<iostream>
using namespace std;

int  f(int* ptr,int k,int u);

int main()
{
    int x;
    cout<<"Enter the size of array:";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int y;
    cout<<"Enter the number you want to search"<<endl;
    cin>>y;
    //without recursion
    for(int i=0;i<x;i++)
    {
        if(arr[i]==y)
        {
            cout<<"Element found at index:"<<"["<<i<<"]"<<endl;
             return 0;
        }
    }
    cout<<"Element not found! ";
    
    
    
    
    
    // with recursion
    int* p=arr;
    int c=0;
    f(p,y,c);
    return 0;
}
int f(int* ptr,int k,int u)
{
   
     int p=*ptr;
    if(p==k)
    {
        cout<<"element found at index: "<<"["<<u<<"]";
        return 0;
    }
    int* q=++ptr;
    u++;
    f(q,k,u);
    return 0;

}