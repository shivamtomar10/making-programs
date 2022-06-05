#include<iostream>
using namespace std;

int main()
{
   int x[]={109,245,3,4};
   int* p=x;
   //*(p++);
 //  cout<<endl;
 // cout<< ++*p;
 //  cout<<*p;
  // *p++;
 // p++;
   cout<<*(p+1);//important *p++ give same as first element but *(p+1) give second element
}
