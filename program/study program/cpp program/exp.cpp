#include <iostream>
using namespace std;

int main()
{
    //ternary expressions 
    int a=0,b=0,d=0;
    cin>>a>>b;
    /*int d=(a>b)?a:b;
    cout<<d;*/
     d=++a ,++b;//comma expression
    cout<<d<<b;


    return 0;
}
/*void g(void){
    int s=5;
    
}*/