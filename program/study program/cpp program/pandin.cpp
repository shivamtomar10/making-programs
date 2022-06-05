#include <iostream>
using namespace std;

int main()
{
  /*  int a=5;
    cout<<"the value of a is :"<<++a;
    cout<<"the value of a is:"<<a++;

cout<<"the value of a is:"<<a--;
cout<<--a;*/
int i=1;
int c=1;
for(int r=1;r<=5;r++)
{
    for(;c<=3;c++)
    {   if(c==7)
           break;
        cout<<" ";
        
    }
    for(int t=1;t<=i;t++)
    {
         if(i==9)
         break;

         
        cout<<"*";
        
       
    }
    cout<<endl;
    int e=1;
   /* while(i>=9 && i<=12)
         {
             for(;e<=2;e++)
             {
                 cout<<" ";
             }
             while(e<=4)
             {
                 cout<<"*";
             }
             cout<<endl;
         }*/
    
    if(i==1)
    {
        c=2;

    }
    if(i==3)
    {
        c=3;
    }
    
      i+=2;


}

}