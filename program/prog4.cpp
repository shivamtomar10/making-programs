//call by value and call by refrence 
#include <iostream>
using namespace std;
void cal_val(int a,int b);
void cal_ref(int &a,int &b);
int main()
{
    int a=0,b=0;
    cout<<"Enter the value of the first number:";
    cin>>a;
    cout<<"Enter the value of second number:";
    cin>>b;
    cout<<"DO YOU WANT TO SWAP NUMBER ";
    cout<<"\nEnter y/Y for swap :";
    char ch;
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        cout<<"BEFORE CALLING FUNCTION YOUR VALUES OF FIRST NUMBER AND SECOND NUMBER ARE:";
        cout<<"\nTHE VALUE OF FIRST NUMBER:"<<a;
        cout<<"\nTHE VALUE OF SECOND NUMBER:"<<b;
        cal_ref(a,b);
        cout<<"\nAFTER CALLING FUNCTION WHICH IS CALL BY REFRENCE BASED ";
        cout<<"\nTHE VALUE OF FIRST NUMBER:"<<a;
        cout<<"\nTHE VALUE OF SECOND NUMBER:"<<b;
    }
    else
    {
        cal_val(a,b);
        cout<<"\nAFTER CALLING FUNCTION WHICH IS CALL BY VALUE BASED ";
        cout<<"\nTHE VALUE OF FIRST NUMBER:"<<a;
        cout<<"\nTHE VALUE OF SECOND NUMBER:"<<b;
    }
    return (0);
}
void cal_val(int a, int b )//call by value function
{
    int temp=a;
    a=b;
    b=temp;
}
void cal_ref(int &a,int &b)//call by refrence using '&' operation
{
    int temp=a;
    a=b;
    b=temp;



}