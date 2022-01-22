//to make a  simple calculator
#include <iostream>
using namespace std;
float cal_add(float a ,float b)   //for addition
{
    float d=a+b;
    return(d);
}
float cal_sub(float a,float b)  //for sbtraction
{
    float d=a-b;
    return(d);
}
float cal_mul(float a,float b) //for multiply
{
    float d=a*b;
    return(d);

}
float cal_div(float a,float b)  //for division
{
    float d=a/b;
    return(d);
}
int main()
{
    cout<<"THIS IS A SIMPLE CALCULATOR ";                       
    cout<<"\nITS HAS ONLY FOUR OPERATIONS ";                       // description to the user
    cout<<"\nENTER 1 FOR ADDITION(+),\n2 FOR SUBTRACTION(-),\n 3 FOR MULTIPLY(*),\n4 FOR DIVISION(/)";
    int x=0;
    cout<<"\n enter your operational number:";
    cin>>x;


    if(x>0 && x<5)
    {
        float a=0,b=0;
        cout<<"Enter the first operand:";
        cin>>a;
        cout<<"Enter the second operand:";
        cin>>b;
        if(x==1)
        {
            float ans=cal_add(a,b);
            cout<<"The addition of the two number is :"<<ans;
        }
         if(x==2)
        {
            float ans=cal_sub(a,b);
            cout<<"The subtraction of the two number is :"<<ans;
        }
         if(x==3)
        {
            float ans=cal_mul(a,b);
            cout<<"The multiply of the two number is :"<<ans;
        }
         if(x==4)
        {
            float ans=cal_div(a,b);
            cout<<"The division of the two number is :"<<ans;
        }

       
    }
    else
    { cout<<"Operational number is wrong ";
        cout<<"\nEnter right operation number. ";
       
    }
     cout<<"\n Do you want to continue";
        cout<<"\n Enter y/Y for yes or press any key to quit ";
        char ch;
        cin>>ch;
        if(ch=='y'|| ch=='Y')
        {
            cout<<main();           //to reapeat the program
        }


    return (0);
}