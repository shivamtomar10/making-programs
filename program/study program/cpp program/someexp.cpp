#include <iostream>
using namespace std;//menu driven using function and switch case
float add(float x,float y)
{
  float s=(x+y);
  return(s);
}
float sub(float x,float y){
  float s=(x-y);
  return s;
}
float mul(float x,float y)
{
  float s=x*y;
  return(s);
}
float div(float x, float y)
{
  float s=x/y;
  return(s);
}
int main()
{
  /* float n1=0,n2=0;
   cout<<"enter  the 1st number";
   cin>>n1;
   cout<<"enter the 2nd number";
   cin>>n2;
   float t=add(n1,n2);
   cout<<t; 
*/
int a=0;
float x,y;
cout<<"Enter the no for the operation";
cout<<"\n1 for +,2 for- ,3for * ,4 for /";
cin>>a;
cout<<"Enter the first operand: ";
cin>>x;
cout<<"Enter the second operand:";
cin>>y;
switch(a)
{
  case 1 :
  {
    float t=add(x,y);
    cout<<"The sum of two numbers is:"<<t;break;
  }
  case 2:
  {
    float t=sub(x,y);
    cout<<"The difference of two numbers is:"<<t;break;
  }
  case 3:
  {
     float t=mul(x,y);
    cout<<"The multiply of two numbers is:"<<t;break;

  }
  case 4:
  {
    float t=div(x,y);
    cout<<"The division of two numbers is:"<<t;break;
  }
}
if(a<=0)
cout<<"Your operation code is wrong";






}