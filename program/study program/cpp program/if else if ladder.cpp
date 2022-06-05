#include<iostream>
using namespace std;
int main()
{int p;
cout<<"enter your percentage for grade";
cin>>p;
if(p>=80)
   cout<<"your grade is A";
else if(p<80 && p>60)
   cout<<"your grade is B";
else if(p<60 && p>40)
   cout<<"your grade is C";
else if(p>0 && p<40)
   cout<<"your grade is D";
else
   cout<<"your input is invalid";    
 return(0);      
}