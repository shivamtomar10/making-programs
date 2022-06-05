#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    fstream f1;
    ofstream f2;
    f1.open ("shivam.txt");
    f2.open("shivam1.txt");
    if(!f1)
    {
        cout<<"error in opening file f1";
        return -1;
    }
    if(!f2)
    {
        cout<<"error in opening file f2";
        return -1;
    }
    string name;
    int marks;
    cout<<"enter your name :";
    getline(cin,name);
    cout<<"enter your marks:";
    cin>>marks;
    f1<<name<<" "<<marks<<endl;
    
    
    string m;
    int e;
    char ch;
    while(f1.get(ch))
    {
        f2.put(ch);
    }
    f2<<m<<" "<<e;
    f1.close();
    f2.close();
    if(f1.fail())
    {
        cout<<"eroor in closing file f1";
        return -1;
    }
     if(f2.fail())
    {
        cout<<"eroor in closing file f2";
        return -1;
    }

    return (0);
}