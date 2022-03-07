#include<iostream>
using namespace std;
#include<fstream>

class student
{
    int roll_no;
    string name;
    int class_sch;
    int year;
    int total_marks;
    public:
    int  set_data(int r,string s,int c,int t,int y);
    int  put_data();

};

int student ::set_data(int r,string s,int c,int t,int y)
{
    roll_no=r;
    name=s;
    class_sch=c;
    year=y;
    total_marks=t;
    return 0;
}
int student::put_data()
{
    ofstream f1;
    f1.open("13.txt",ios::app);
    if(!f1)
    {
        cout<<"Error in opening file";
        return -1;
    }
    f1<<"Roll No:"<<roll_no<<endl;
    f1<<"Name:"<<name<<endl;
    f1<<"class:"<<class_sch<<endl;
    f1<<"Year:"<<year<<endl;
    f1<<"Total marks:"<<total_marks<<endl;

    f1.close();
    if(f1.fail())
    {
        cout<<"Error in closing file";
        return -1;
    }
    return 0;
}

int main()
{
    student s1,s2,s3,s4,s5;
    s1.set_data(1,"shivam tomar",6,99,2022);
    s1.put_data();
    s2.set_data(2,"anshu tomar",7,90,2022);
    s2.put_data();
    s3.set_data(3,"riya tomar",8,93,2019);
    s3.put_data();
    s4.set_data(4,"dinesh tomar",11,87,2020);
    s4.put_data();
    s5.set_data(5,"renu tomar",12,88,2021);
    s5.put_data();
    
    ifstream f2;
    f2.open("13.txt");
    if(!f2)
    {
        cout<<"Error in openinfg file";
        return -1;
    }
    string s;
    while(getline(f2,s))
    {
        cout<<s<<endl;
    }
    f2.close();
    if(f2.fail())
    {
        cout<<"error in closing file f2";
        return -1;
    }
    return 0;
}
