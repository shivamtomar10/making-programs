#include<iostream>
using namespace std;

int main()
{
    
    char str[100];
   /* for(int k=0;k<argc;k++)
    {
        str[k]=argv[k];
    }*/
    gets(str);
    int i;
    int freq[256]={0};
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<256;i++)
    { 
        if(freq[i]!=0)
        cout<<"The no. of occurence of character"<<(char)i<<":"<<freq[i]<<"\n";
    }


    return 0;
}