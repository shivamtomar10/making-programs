#include <iostream>
using namespace std;

int main()
{
   /* cout<<"hello everyone "<<endl<<"This is a program for sum of digits of a number";
    cout<<endl<<"Hence enter a number";
    int a;
    cin>>a;
    cout<<int len( int a);*/
    int a;
    cout<<"enter the number for the test of prime number"<<endl;
    cin>>a;
    int t=0;
    if(a>=2)
    {   int i=2;
       while(i>=2 && i<a)
       {
          
           t=a%i;
           if(t==0)
           {
               cout<<"it is not a prime number";
                     break;
           }
         i+=1;
       }  
      if(t!=0)
      {
          cout<<"it is prime number";
      }

    }
    if(a==1)
    {
        cout<<"it is not a prime number";

    }
    if(a==0)
    {
        cout<<"it is not defined";
    }
    if(a==2)
    {
        cout<<"it is a prime number";
    }
    if(a<0)
    {
        cout<<"your input is invalid"<<endl;
        cout<<"write your another input";
       
    }
    cout<<"\ndo you want to continue"<<endl;
    cout<<"if yes then enter 'y'key"<<endl<<"or press any key to end";
    char ch;
    cin>>ch;
    if(ch=='y')
    {
        cout<<main();
    }



    


}
