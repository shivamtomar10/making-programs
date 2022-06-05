#include <iostream>
using namespace std;

int main()
{
    /*int i=3,u=1;//for pyramid structure
    for(int r=1;r<=4;r++)
    {
        for(int c=1;c<=i;c++)
        {
            cout<<" ";
        }
        for(int t=1;t<=u;t++)
        {
            cout<<"*";
        }
        cout<<endl;
        i-=1;
        u+=2;
    }*/
   /* int i=0,u=7;//for inverted pyramid
    for(int r=1;r<=4;r++)
    {
        for(int c=1;c<=i;c++)
        {
            cout<<" ";
        }
        for(int t=1;t<=u;t++)
        {
            cout<<"*";

        }
        cout<<endl;
        i+=1;u-=2;
    }*/
    /*int i=3;//pattern2
    int u=1;
    for(int r=1;r<=4;r++)
    {
        for(int c=1;c<=i;c++){
            cout<<" ";

        }
        for(int t=1;t<=4;t++)
        {
            if(u==2 ||  u==3)
            {
                if(t==2 || t==3)
                {
                    cout<<" ";
                }
                if(t==1 ||  t==4)
                {
                    cout<<"*";
                }

            }
            if(u==1 || u==4)
            {
                cout<<"*";

            }
            
        }
        cout<<endl;
        i-=1;u++;


    }*/
   /* int i=0,r=1;//pattern2
    for(;r<=4;r++)
    {
        for(int c=1;c<=i;c++)
        {
            cout<<" ";
        }
        for(int t=1;t<=1;t++)
        {
            cout<<"*";

        }
        cout<<endl;
        i++;

    }
    r=5;
    if(r==5)
    {
        cout<<"**** ****";

    }
    cout<<endl;
    r++;
    int z=3,p;
    for(;r>5 && r<=9;r++)
    {
        for(p=1;p<=z;p++)
        {
            cout<<" ";
        }
        for(int m=1;m<=1;m++)
        {
            cout<<"*";

        }
        cout<<endl;
        z-=1;
    }*/
    /*int t=2;//pattern3
    for(int c=1;c<=6;c++)
    {
        cout<<"*";

    }
    cout<<endl;
    int i=3;
    for(;t<=5;t++)
    {
        cout<<"*";
        for(int u=1;u<=i;u++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        i-=1;
    }
    
    cout<<"*";*/
   /* int i=5,u=1;//for review
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=i;c++)
        {
            cout<<" ";

        }
        cout<<"*";
       if(r>=2)
       {
           for(int t=1;t<=u;t++)
           {
               cout<<" ";

           }
           cout<<"*";
       }
       cout<<endl;
       i-=1;
       u+=2;

        
        
    }
    if(1)
    {
        cout<<" * * * * * * ";
    }*/
  /* int u=2,i=1;
    for(int r=1;r<=4;r++)
    {
        cout<<"1";
        for(int t=1;t<=i;t++)
        {
            cout<<" ";
        }
        i++;
       if(r==2)
       {
           cout<<r;
       }
        if(r==3)
       {
           cout<<r;
       } if(r==4)
       {
           cout<<r;
       }
       cout<<endl;
    }
    if(1){
        cout<<"1 2 3 4 5";
    }*/
    /*int u=8,z=2;//for review
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=u;c++)
        {
            cout<<" ";
        }
      
        if(r==1)
        {
            cout<<"1";
            cout<<endl;

        }
        
        if(z>=2 && z==r)
        {
            if(r==2){
                cout<<z<<" "<<(z+1)<<" "<<z;
            }
            if(r==3)
            {
                cout<<z<<" "<<(z+1)<<" "<<(z+2)<<" "<<(z+1)<<" "<<z;
            }
            if(r==4)
            {
                 cout<<z<<" "<<(z+1)<<" "<<(z+2)<<" "<<(z+3)<<" "<<(z+2)<<" "<<(z+1)<<" "<<z;
            }
            if(r==5)
            {
                 cout<<z<<" "<<(z+1)<<" "<<(z+2)<<" "<<(z+3)<<" "<<(z+4)<<" "<<(z+3)<<" " <<(z+2)<<" "<<(z+1)<<" "<<z;
            }
        }
        cout<<endl;
          u-=2;
        z++;
    }*/
   /* int i=9;//pattern5
    for(int r=1;r<=10;r++)
    {
        for(int c=1;c<=i;c++)
        {
            cout<<" ";
        }
        for(int t=1;t<=r;t++)
        {
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
        i--;

    }
    
    int u=1;
    while(u<=4)
    {
        cout<<"       ****   ";
        cout<<endl;
        u++;
    }*/
   
   /* int u=4,p=1,z=2;
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=u;c++)
        {
            cout<<" ";

        }
        for(int t=r;t<=p;t++)
        {
            cout<<t;
           
        }
        p+=2;
        u--;
        if(r>=2 && r<=5 )
        {
           while(z>=r)
           {
               cout<<z;
               z--;
           }
           if(r==2)   //this if statement are used as while,using for loop or while loop the updated value is coming to z
                        //that make the results wrong

           z+=3;
           if(r==3)
           z+=4;
           if(r==4)
           z+=5;
           
        }
        
           
        
       
        cout<<endl;
    }*/
    int u=4,z=1;
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=u;c++)
        {
            cout<<" ";
        }
         u--;
        for(int t=1;t<=r;t++)
        {
            cout<<t;
        }
        for(;z>=1 && r>1;z--)
        {
            cout<<z;
        }
        if(r==2)
        z+=2;
        if(r==3)
        z+=3;
        if(r==4)
        z+=4;
       cout<<endl;
    }
}