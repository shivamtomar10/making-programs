#include <iostream>
using namespace std;

int main()
{
    /* int x=0;        //global for if-> x
    if(1)
    {
        x++;
    }
    cout<<x;*/

    /*  int x=3;
    string s="shivam";
    if(x==3)
    {
        int x=5;        //local variable
        cout<<x;
    }*/

   /* int x = 3;
    string s = "shivam";
    if (x == 3)
    {
        x = 5; // point to global
        cout << x;
    }*/
    int x = 3;
    string s = "shivam";
    if (x == 3)
    {
        int  x = 5; //local variable
       // cout << x;
    }
    cout<<x;        //int x=5 x->3 and if x=5 x->5
        return 0;
    }