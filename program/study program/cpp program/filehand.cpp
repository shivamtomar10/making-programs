#include <iostream>
using namespace std;
#include<fstream>

int main()
{
    ofstream f;
    f.open("shivam.txt");
    if(!f)
    {
        cout<<"error in opening file";
    }
    string name("shivam tomar");
    int marks=99;
    int roll_no=20211455;

    f<<"roll no : "<<roll_no<<"\n";
    f<<"Name :"<<name<<"\n";
    f<<"Marks :"<<marks<<"\n";
    f.close();
    if(f.fail())
    {
        cout<<"erreo in closing file";

    }
    
     return (0);
}