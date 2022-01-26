//pattern of pyramid and its inversion
#include <iostream>
using namespace std;

void pyramid(int a);
void invpyramid(int a );
int main()
{
    cout<<"THIS IS FOR GETTING PYRAMID AND ITS INVERSION";
    cout<<"\nEnter the code,\n1 for PYRAMID,\n2 for INVERSION of it ";
    int x=0;
    cin>>x;
    if(x==1 || x==2)
    {
        cout<<"Eter the number of rows to be ther in pyramid:";
        int a=0;
        cin>>a;
        switch(x)
        {
            case 1:
            {
                pyramid(a);break;
            }
            case 2:
            {
                invpyramid(a);break;
            }
        }


    }
    else
    {
        cout<<"YOUR CODE IS WRONG ";
        cout<<"\nEnter the right code";
    }
    cout<<"DO YOU WANT TO CONINUE ";
    cout<<"Enter y/Y for yes or press any key to quit";
    char ch;
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        cout<<main();
    }

    
    return (0);
}
void pyramid(int a)
{
    int p=(a-1);
    for (int r=1;r<=a;r++)
    {
        for(int c=1;c<=p;c++)
        {
            cout<<" ";
        }
        for(int p=1;p<=r;p++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        p--;
        
    }
}
void invpyramid(int a)
{
    int p=1;
    for (int r=a;r>=1;r--)
    {
        if(r<a)
        {
            for(int c=1;c<=p;c++)
            {
                cout<<" ";
            }
            p++;
        }
        for(int z=1;z<=r;z++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;

        

        
    }
}