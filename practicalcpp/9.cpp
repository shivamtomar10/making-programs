#include<iostream>
using namespace std;

class person
{
    public:
    string name;
    virtual void display()
    {
        cout<<"Name:"<<name<<endl;
    }
   

};
class student :public person
{
    string course;
    int marks;
    int year;
    public:

    void set_data(string n,string c,int m,int y)
    {
        name=n;
        course=c;
        marks=m;
        year=y;

    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Course:"<<course<<endl;
        cout<<"Marks:"<<marks<<endl;
        cout<<"Year:"<<year<<endl;
    }

};
class employee:public person
{
    string department;
    double salary;
    public:
    void set_data(string n,string d,double s)
    {
        name=n;
        salary=s;
        department=d;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<department<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
    person p1;
    p1.name="shivam";
    p1.display();

    student s1;
    s1.set_data("shivam1","bsc",99,2020);
    s1.display();

    employee e1;
    e1.set_data("shivam2","sales executive",12.90);
    e1.display();
    return 0;
}