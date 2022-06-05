#include<iostream>
using namespace std;

int main()
{
  /*  int x[]={1,2,3,4};
    int* p=x;
   for (int i=0;i<4;i++)//accessing each element
    {
        cout<<*p<<endl;
        p++;
    }
    //cout<<x+3;//accessing address
    //cout<<*(x+3);//accessing value
    //cout<<*(p+3);//accessing value
    //cout<<p[0];*/
    int x=4;
    int y=5;
    int* p=&x;
    int* q=&y;
    //cout<<p-q;
    cout<<p<<endl<<q;
    cout<<p+4;

    



    return(0);

}