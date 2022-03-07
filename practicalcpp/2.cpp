#include <iostream>
using namespace std;
// removing the duplicates element
int func1(int u, int arr[])
{
    if(u==0 || u==1)
    {
        return u;
    }
    int j=0;
    int temp[u];
    for(int i=0;i<u-1;i++)
    {
        if(arr[i]!=arr[i+1])
       { 
           temp[j]=arr[i];
          j++;
        }
    }
   
   
    temp[j++]=arr[u-1];
 
    for(int i=0;i<j;i++)
    {
       
        arr[i]=temp[i];
    }
   
    return  j;


}
int main()
{
    cout << "Enter the size of the array";
    int x;
    cin >> x;
    cout << "Enter the elements of array:"<<endl;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int f=func1(x,arr);
    
    for(int i=0;i<f;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}