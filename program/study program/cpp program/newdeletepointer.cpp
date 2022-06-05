#include<iostream>
using namespace std;



int main()
{
    //int x=4;
  /*  int* p=new int (4);
    
    cout<<*p;
    cout<<"\naddress of p"<<&p;
    cout<<"\nvalue at p"<<p;*/

    int* arr=new int[3];
    for (int i=0;i<3;i++)
    {
        cout <<"enter the value at index:"<<i;
        cin>>arr[i];

    }
  //  delete[] arr;
    cout<<"the value at index 0:"<<arr[0]<<endl;
    cout<<"the value at index 1:"<<arr[1]<<endl;

    return 0;
}