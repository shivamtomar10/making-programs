#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    int pos,n;
    ofstream shiv;
    shiv.open("shivam1.txt");
    if(!shiv)
    {
        cout<<"error in open file shiv";
        return -1;
    }
    cin>>n;
    //shiv<<"this is my pen:";
    //shiv<<"345";
    cout<<"the put pointer is at this place:";
    cout<<shiv.tellp();
  // shiv.seekp(12);
   // shiv<<"fgtry";
    while(n>0)
    {
        cout<<"enter";
        cin>>pos;
            shiv<<"pos:"<<pos<<endl;
            n=n-1;
            shiv.seekp(12);

    }

    shiv.close();
    if(shiv.fail())
    {
        cout<<"error in closing file";
        return -1;
    }
    return 0;
}