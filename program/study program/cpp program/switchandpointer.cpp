#include<iostream>
using namespace std;

int main()
{
    int x=9;
   /* switch(x)
    {
        default:
        {
            x=1;
        }
        case 1: 
        {
            x=8;
        }
        case 9:
        {
            x=0;
        }
       
    }
    cout<<"x="<<x;*/
    int arr[x]={22,89,67,54,34};
    int* p=arr;
    // cout<<"*p="<<*p; //22
    // cout<<"++*p="<<++*p; //23
    // cout<<"*p++= "<<*p++;    //22
    // cout<<"*++p="<<*++p; //89
    cout<<"*(p+1)="<<*p++<<endl;
    cout<<"*p="<<*p;
    return 0;
}