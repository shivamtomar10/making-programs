#include<iostream>
using namespace std;
#include<algorithm>

int f(string a,string b)
{
    if(a!=b)
    {
        if(a>b)
        {
            cout<<"First String is greater than second string "<<endl;
        }
        if(a<b)
        {
            cout<<"Second string is greater than first string"<<endl;
        }
        return 0;
    }
    else
    {
        cout<<"Both string are equal"<<endl;
    }
    return 0;
}
int main()
{
    cout<<"1.show address of each element in string"<<endl;
    cout<<"2.concatenate two string"<<endl;
    cout<<"3.compare two string"<<endl;
    cout<<"4.calculate length of string"<<endl;
    cout<<"5.convert all lowercase character to uppercase character"<<endl;
    cout<<"6.reverse the string"<<endl;

    int x;
    cout<<"Enter the case you want to do"<<endl;
    cin>>x;
    string s1,s2;
    int len1,len2;
    if(x>=1 && x<=6)
   { 
       switch(x)
      {
       
       
        case 1:
        {
           
            cout<<"Enter the string: ";
            while(getchar()!='\n');
            getline(cin,s1);
            len1=s1.length();
            cout<<"The address of each element in  string "<<"\n";
            string* p=&s1;
            // cout<<&s1[0]<<endl;
            // cout<<"p="<<p;
            // cout<<"\n"<<"p++"<<++p;
           for(int i=0;i<len1;i++)
            {
                cout<<"The address of string at index"<<"["<<i<<"] is:"<<p<<endl;
                ++p;
               
            }
            break;
        }
        case 2:
        {
            cout<<"Enter the first string : ";
            while(getchar()!='\n');
            getline(cin,s1);
            cout<<"Enter the second string: ";
            // while(getchar()!='\n');
            getline(cin,s2);
            // by inbuilt functions
            string s3=s1+s2;
            cout<<"The string after concatenation using inbuilt functions:";
            cout<<s3;
            // by not using inbuilt functions
            len1=s1.length();
            len2=s2.length();
            int len3=len1+len2;
            string s4[len3];
            for(int i=0;i<len1;i++)
            {
                s4[i]=s1[i];
                // cout<<"s1"<<endl;
            }
            int j=0;
            for(int i=len1;i<len3;i++)
            {
                s4[i]=s2[j];
                j++;
                //  cout<<"s2"<<endl;
            }
            cout<<"\nThe string after concatenation by not using inbuilt functions:";
            for(int i=0;i<len3;i++)
            {
               cout<<s4[i];
            }
            break;
        }
        case 3:
        {
            cout<<"Enter the first string : ";
            while(getchar()!='\n');
            getline(cin,s1);
            cout<<"Enter the second string: ";
            // while(getchar()!='\n');
            getline(cin,s2);
            // by inbuilt functions
            cout<<"The result after compare these two string using inbuilt function is:";
            cout<<s1.compare(s2);

             // by not using inbuilt functions
            cout<<"\nThe result after compare these two string by not using inbuilt functions is:";
            f(s1,s2);
             break;
        }
        case 4:
        {
            
            cout<<"Enter the first string : ";
            while(getchar()!='\n');
            getline(cin,s1);
            //by inbuilt functions
            cout<<"The length of the string using inbuilt functions is:";
            cout<<s1.length();
            // by  not using inbuilt functions
             cout<<"\nThe length of the string by not using inbuilt functions is:";
             int i=0;
            for(;s1[i]!='\0';i++);
            cout<<i<<endl;
           
            break;
        }
        case 5:
        {
            cout<<"Enter the first string : ";
            while(getchar()!='\n');
            getline(cin,s1);
            //by inbuilt functions
            cout<<"The uppercase of this string using inbuilt functions:";
            transform(s1.begin(),s1.end(),s1.begin(), :: toupper);
            cout<<s1;
            // by  not using inbuilt functions
           
            transform(s1.begin(),s1.end(),s1.begin(), :: tolower);
           len1=s1.length();
            cout<<"\nThe uppercase of this string by not using inbuilt functions:";
            for(int i=0;i<len1;i++)
            {
                
                if(islower(s1[i]))
               { 
                   char ch;
                   int l=(int)s1[i];
                   l-=32;
                   ch=l;
                   s1[i]=ch;

               }   
              
            }
            cout<<s1;
            
           

            
            break;

        }
        case 6:
        {
            cout<<"Enter the first string : ";
            while(getchar()!='\n');
            getline(cin,s1);
            len1=s1.length();
            //by inbuilt functions
            reverse(s1.begin(),s1.end());
            cout<<"The reverse of input string using inbuilt functions is:";
            cout<<s1;

             reverse(s1.begin(),s1.end());
             // by  not using inbuilt functions
            cout<<"\nThe reverse of input string by not using inbuilt functions is:";
            for(int i=(len1-1);i>=0;i--)
            {
                
                cout<<s1[i];
            }
                break;
        }
     }
   }
   else
   {
       cout<<"enter the correct code"<<endl;

   }
    return 0;
}