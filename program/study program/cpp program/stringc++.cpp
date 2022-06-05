#include <iostream>
using namespace std;
#include<string.h>
int main(int argc,char argv[])
{
  /*  string str="ab";
    string str2;
    str2="shivam tomar";*/
    /*cout<<str;
    cout<<endl<<str[0];*/
   // cout<<str.length();
  // string str1=str;
   // cout<<str1;
   // cout<<str2.compare(str1);
   // cout<<(str==str2);              //not working check it 
    //cout<<p;
   // string str3(str);
    //cout<<str3;
    //string str4(5,'a');       // five times a insert into string variable
   // cout<<str4;
    //string str3("hello world",2);
    //cout<<str3;
    //string str5(str2,str2[2],3);
     //cout<<str5;

   // string str5("shivam tomar",5)
    //cout<<str5;
   /* string s;
    getline(cin,s);
    cout<<s;*/
  /*  string s1[3];           //array of string
    s1[0]="as";
    s1[1]="ad";
    s1[2]="se";
    cout<<*s1;         */ // accesing first element
   /* string as="shivamtomar";
    string sd="firstthing";
    cout<<as.compare(sd[2],5,sd);*/


  /*  string s("shivam tomar");
    cout<<s.substr(s[2],3);*/

   
 /* string s1("shivam tomar");
  string s2("dinesh tomar");
   //cout<< s1.substr(0,2);   //sh as substring
   //cout<<s2.substr(2,2);    //ne as substring
   // cout<<s1.find("va",0);  //finding
   // cout<<s1.rfind("va"); // from last
  //  cout<<s1.append(s2);    //appending at last
    //cout<<s1+s2;    //adding two string
   cout<< s1.compare(0,4,s2,0,2);  //compairing two string by position and length*/


  /* string sd;
   sd="shivam tomar";
  // string cd="dinesh tomar";
  // string ds(sd,0,5);
   //cout<<ds;
   string es(sd,3);  // check
   cout<<es;*/

 /*  string s1("shivam tomar");
  // cout<<s1.find_first_of("va",0)<<endl;
  // cout<<s1.find_first_not_of("r",0)<<endl;
   cout<<s1.find_last_not_of("r",0)<<endl;
   cout<<s1.find_last_of("r",0);*/


 /*  string s("shivam tomar");
   string f(s,4);
  // cout<<f;
  //f.insert(0,s);
  //cout<<f;
  s.insert(0,1,f);      //check
  cout<<s;
 // f.replace(0,3,s,2,3);
  //cout<<f;*/


  /*string s("shivam tomar");
  s.erase(0,3);
  cout<<s;
  s.clear();
  cout<<s;*/


  /*string sd("shivam tomar");
  string ds("dinesh tomar");
  swap(sd,ds);
  cout<<sd<<endl<<ds;*/



 /* char s[4];
  char sh;
  cin>>sh;
  while(getchar()!='\n');  // use of get char to clear the buffer 
  cin.getline (s,4);
  cout<<s<<endl<<sh;*/
 

 cout<<argc<<endl;
 for(int i=0;i<argc;i++)
 {
   cout<<argv[i]<<endl;
   
 }














    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return(0);
}