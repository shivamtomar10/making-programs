#include<iostream>
using namespace std;
 
int main(){
    int a=10;
   // int* p=&a;
   /* cout<<"a="<<a<<endl;//bsaic of pointer
    cout<<"&a="<<&a<<endl;
    cout<<"p="<<p;
    cout<<"\n*p="<<*p;
    //   cout<<++*p<<endl<<a;//changing value of a by pointer
    int* p=0;
    // cout<<*p++;
    // cout<<"\n"<<a;
    if(p!=0)//using, make your program effective
    cout<<endl<<*p;*/
     char c='a',&f=c;
    cout<<f+5<<c;
    return 0;
} 