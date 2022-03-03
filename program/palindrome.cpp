#include<iostream>
using namespace std;
#include<cstring>


int main()
{
    cout<<"Enter the string you want to check for palindrome ";
    string s1;
    getline(cin,s1);
    
    int len=s1.length();
    string arr[len+1];
    for(int i=0;i<len;i++)
    {
        string s2=s1.substr(0,1);
        arr[i]=s2;
        // int len1=s2.length();
        int len2=len;
        // cout<<"shivam 1"<<endl;
        s1=s1.substr(1,len2-(i+1));
        // cout<<s1<<endl;
    }
    // cout<<"shivam2"<<endl;
    //  for(int i=0;i<len;i++)
    // {
    //     // string s2=s1.substr(0,1);
    //      cout<<arr[i]<<"\n";
    //     // s1=s1.substr(0,1);
    // }
    // cout<<"shivam3"<<endl;

    string* p1=arr;
    string arr1[len+1];
    for(int i=len-1;i>=0;i--)
    {
        arr1[i]=*(p1+i);
        // cout<<arr1[i]<<endl;
    }
    for(int i=0;i<len;i++)
    {
        if(arr[i]==arr1[i])
        continue;

        cout<<"Your string is not a palindrome"<<endl;
        return 0;

    }
    cout<<"Your string is a palindrome string"<<endl;
    return 0;
}