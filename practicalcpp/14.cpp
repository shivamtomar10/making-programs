#include<iostream>
using namespace std;

#include<fstream>

int main()
{
    ifstream f1;
    f1.open("14.txt");
    cout<<"s1"<<"\n";
    if(!f1)
    {
        cout<<"Error in opening file";
        return -1;
    }
    cout<<"s2"<<"\n";
    ofstream f2;
    f2.open("14k.txt",ios::app);
    if(!f2)
    {
        cout<<"Error in  opening file";
        return -1;
    }
     cout<<"s3"<<"\n";
    string s;
    while(f1.eof()!=1)
    {
         cout<<"s4"<<"\n";
        getline(f1,s);
        f2<<s<<"\n";

    }
     cout<<"s5"<<"\n";
    f1.close();
    if(f1.fail())
    {
        cout<<"Error in closing file f1";
        return -1;
    }
     f2.close();
    if(f2.fail())
    {
        cout<<"Error in closing file f2";
        return -1;
    }
    return 0;
}