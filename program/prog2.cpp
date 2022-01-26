//pattern of half TRIANGLE and its inversion
#include<iostream>
using namespace std;
void half_trian(int x);
void invhalf_trian(int x);

int main()
{
    cout<<"THIS IS FOR GETTIING HALF TRIANGLE  AND ITS INVERSION WITH SIGN LIKE THIS '*'";
    cout<<"CHOOSE THE CODE,\n1 FOR HALF TRIANGLE,\n2 FOR ITS INVERSION ";
    int x=0;
    cin>>x;

    if(x==1 || x==2)
    {
        int a=0;
        cout<<"Enter the number of rows to be there in  triangle ";
        cin>>a;
        switch(x)
        {
            case 1:
            {
                half_trian(a);
            }
            case 2:
            {
                invhalf_trian(a);
            }
        }
    }
    else
    {
        cout<<"YOUR CODE IS WRONG ";
        cout<<"PLEASE ENTER RIGHT CODE ";

    }
    cout<<"DO YOU WANT TO CONTINUE ";
    cout<<"\nEnter y/Y for yes or press any other key to quit ";
    char ch;
    cin>>ch;
    if(ch=='y' ||ch=='Y')
    {
        cout<<main();
    }
    return(0);
}
void half_trian(int x)
{
    for(int r=1;r<=x;r++)
    {
        for(int y=1;y<=r;y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}
void invhalf_trian(int x)
{
    for(int r=x;r>=1;r--)
    {
        for (int c=1;c<=r;c++)
            {
                cout<<"*";
            }
            cout<<endl;
    }
}