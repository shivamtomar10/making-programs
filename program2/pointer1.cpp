#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* p=&a;
    if(p!=0)
    cout<<"*p="<<*p<<endl;
    cout<<"a="<<a;
    cout<<"\np="<<p;


    return 0;
}