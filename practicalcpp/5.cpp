#include<iostream>
using namespace std;
#include<algorithm>


int main()
{
    int r1,r2;
    cout<<"Enter the size of first array"<<endl;
    cout<<"row size:";
    cin>>r1;
   // cout<<"column size:";
    //cin>>c1;
    cout<<"Enter the size of second array"<<endl;
    cout<<"row size:";
    cin>>r2;
   // cout<<"column size:";
    //cin>>c2;
    int arr1[r1],arr2[r2];
    int r3=r1+r2;
    cout<<"Enter the elements into first array"<<endl;
    for(int i=0;i<r1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elemnets into sceond array"<<endl;
    for(int i=0;i<r1;i++)
    {
        cin>>arr2[i];
    }
    // sort(arr1,arr1+r1);
    // sort(arr2,arr2+r2);
    // now we gonna  merge two ordered arrays
    int arr3[r3];
    for(int i=0;i<r1;i++)
    {
          arr3[i]=arr1[i];
    }
    int j=0;
    for(int i=r1;i<r3;i++)
    {
       
            arr3[i]=arr2[j];
            j++;
    }
    // sorting of merge array
    sort(arr3,arr3+r3);
    cout<<"The marray after merge these two arrays"<<endl;
    for(int i=0;i<r3;i++)
    {
        cout<<arr3[i]<<" ";
        
    }
    return 0;
}