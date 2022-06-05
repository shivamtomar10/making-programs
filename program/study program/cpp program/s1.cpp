#include<iostream>
using namespace std;

int main()
{
  /*  int a=0;
    cout<<"enter the number of rows which you want to be printed as '*'";
    cin>>a;
    int i=1;
    int b=0;
    while(i>=1 && i<=a)
    {
        
        cout<<endl<<"*";
        while(i<b)
        {
            cout<<"*";
            i+=1;
        }
        b+=b;
        i+=1;
    }*/
      int a=0;
      cout<<"enter the number of rows";
      cin>>a;
      int i=0;
      int b=1;
       int I=0;

      while(i<=(a-1) && i>=0)
      {
          cout<<endl<<"*";
         
           while(I!=b && I>b)
           {
             cout<<"*";
             I+=1;

           }
           b+=1;
           i+=1;
           I+=1;

      }
}