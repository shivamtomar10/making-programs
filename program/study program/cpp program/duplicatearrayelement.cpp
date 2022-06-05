#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array you want to made";
    int x;
    cin>>x;
    cout<<"Enter the array elements";
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int dup;
    int j=1;
    for(int i=0;i<x;i++)
    {
        for(;j<(x-1);j++)
        {
            dup=(arr[i]==arr[j])?1:0;
            if(dup==1)
            {
               for(;j<(x-1);j++)
               {
                   arr[j]=arr[j+1];
               }
            }
        }
        j=1;
        j+=i;
        
    }
    cout<<"The elements of array are:";
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}
