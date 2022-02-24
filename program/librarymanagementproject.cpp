#include <iostream>
using namespace std;
#include <fstream>
#include<map>
#include<cstring>

static map<int,int>  map1,map2;
class library
{
    int id_of_book, date, month, year, roll_no;
    string name_of_book;
    int no_of_copies;
    string name_of_student;
   
  public:
    
    
    int add_new_books(int id, string name, int copies);
    int issued_books(int idf2, string name_of_book, int roll_noi, string nam_student, int datef2, int monthf2, int yearf2);

    int return_book(int ide, string nam_obook, string nam_ostd, int d, int m, int y, int rno, int dr, int mr, int yr);

   
    int availability_books(int ado);
    int disp();
    
    
};

int library::add_new_books(int ide, string name, int copies)
{

    id_of_book = ide;
    name_of_book = name;
    no_of_copies = copies;
    ofstream f1;
    ofstream f5;
    f1.open("librarymanagement1.txt",ios::app);
    if (!f1)
    {
        cout << "Error in opening file library management1";
        return -1;
    }
    
    f1 << "\nADDING BOOK DETAILS:\n";
    f1 << "ID_OF_BOOK:" << id_of_book << endl;
    f1 << "NAME_OF_THE_BOOK:" << name_of_book << endl;
    f1 << "NO_OF_COPIES:" << no_of_copies << endl;

    f1.close();
    if (f1.fail())
    {
        cout << "Error in closing file librarymanagement";
        return -1;
    }
    
    map1[id_of_book]=no_of_copies;
    f5.open("librarymanagement2.txt",ios::app);
    if(!f5)
    {
        cout<<"Error opening file library management2";
        return -1;
    }
    
    f5<<id_of_book<<" "<<no_of_copies<<endl;
    f5.close();
    if(f5.fail())
    {
        cout<<"Error in closing file";
    }
    return 0;
   
}
int library::issued_books(int idf2, string name_of_book, int roll_noi, string nam_student, int datef2, int monthf2, int yearf2)
{   
    name_of_student = nam_student;
    name_of_book = name_of_book;
    id_of_book = idf2;
    roll_no=roll_noi;
    date = datef2;
    month = monthf2;
    year = yearf2;
    int mapi=map1[id_of_book];
    int ydef=map2[roll_no];
    //cout<<ydef<<endl;
    if(mapi==0)
        {
            cout<<"NO copies are left";
        }
        else
        {
            if(ydef==1)
            {
                cout<<"Defaulter student";
            }
            else
            {
                ofstream f2;
                f2.open("librarymanagement1.txt", ios::app);
                if (!f2)
                {
                     cout << "error in opening file library management of adding new items";
                      return -1;
                }
             f2 << "\nISSUING DETAILS:\n";  

             f2 << "roll_no_of_student:" << roll_no << endl;
             f2 << "name_of_student:" << name_of_student << endl;
             f2 << "ID_OF_BOOK:" << id_of_book << endl;
             f2 << "name_of_book:" << name_of_book << endl;
             f2 << "Date of issued:" << date << "/" << month << "/" << year << endl;
             map1[id_of_book]=mapi-1;
            
            ofstream f6;
             f6.open("librarymanagement2.txt",ios::app);
             if(!f6)
             {
                cout<<"Error opening file library managemnt 2 during issued";
                return -1;
             }

             f6<<id_of_book<<" "<<map1[id_of_book]<<endl;
             f6.close();
             if(f6.fail())
             {
                cout<<"Error in closing file libmanag2 during issued";
                return -1;
             }
             f2.close();
             if (f2.fail())
             {
                 cout << "error in closing file library management of issued";
                 return -1;
             } 
           
            }
        }     
    return 0;
}
int library::return_book(int ide, string nam_obook, string nam_ostd, int d, int m, int y, int rno, int dr, int mr, int yr)
{
    id_of_book = ide;
    name_of_book = nam_obook;
    name_of_student = nam_ostd;
    int dater = dr;
    int monthr = mr;
    int yearr = yr;
    date = d;
    month = m;
    year = y;
    roll_no = rno;
    int mapii=map1[id_of_book];
    
    ofstream f3;
    f3.open("librarymanagement1.txt", ios::app);
    if (!f3)
    {
        cout << "Error in opening file library mannagement of retrun ";
        return -1;
    }
    f3 << "\nRETURN DEATAILS:\n";
    f3 << "roll_no_of_student:" << roll_no << endl;
    f3 << "name_of_student:" << name_of_student << endl;
    f3 << "ID_OF_BOOK:" << id_of_book << endl;
    f3 << "name_of_book:" << name_of_book << endl;
    f3 << "Date of issued:" << date << "/" << month << "/" << year << endl;
    f3 << "Date of return:" << dater << "/" << monthr << "/" << yearr << endl;
    map1[id_of_book]=mapii+1;
    if (month == monthr && year==yearr)
    {
        if (dater - date > 7)
        {
            
            f3<<"STUDENT STATUS:"<<"DEFAULTER";  
            map2[roll_no]=1;
            ofstream f8;
            f8.open("librarymanagement3.txt",ios::app);
            if(!f8)
            {
                cout<<"Error opening file library management3 during return";
                return -1;
            }

            f8<<roll_no<<" "<<map2[roll_no]<<endl;
    
            f8.close();
            if(f8.fail())
            {
                cout<<"Error closing file library managemnt during return ";
                return -1;
            }
        }
    }
    if(monthr>month && year==yearr)
    {
        int days_taken;
        cout<<"Enter the total number of days in month"<<month<<":";
        int days;
        cin>>days;
        days_taken=days-date;
        if(days_taken+dater>7)
        {
            f3<<"STUDENT STATUS:"<<"DEFAULTER";
            map2[roll_no]=1;
           
        }
        ofstream f8;
        f8.open("librarymanagement3.txt",ios::app);
        if(!f8)
        {
            cout<<"Error opening file library management3 during return";
            return -1;
        }

        f8<<roll_no<<" "<<map2[roll_no];
    
        f8.close();
        if(f8.fail())
        {
             cout<<"Error closing file library managemnt during return ";
            return -1;
        }
    }
   if(yearr>year)
    {
       
        f3<<"STUDENT STATUS:"<<"DEFAULTER";
        map2[roll_no]=1;
        ofstream f8;
        f8.open("librarymanagement3.txt",ios::app);
        if(!f8)
        {
            cout<<"Error opening file library management3 during return";
            return -1;
        }

        f8<<roll_no<<" "<<map2[roll_no];
    
        f8.close();
        if(f8.fail())
        {
            cout<<"Error closing file library managemnt during return ";
            return -1;
        }
    }
    

    f3.close();
    if(f3.fail())
    {
        cout<<"Error in closing file of library management of return book";
        return -1;
    }
    ofstream f7;
    f7.open("librarymanagement2.txt",ios::app);
    if(!f7)
    {
        cout<<"error opening file libmanag2 during return";
        return -1;
    }
    f7<<id_of_book<<" "<<mapii+1<<endl;
    //cout<<mapii<<endl;
    f7.close();
    if(f7.fail())
    {
        cout<<"Error closing file libmanag2 during return";
        return -1;
    }
   
    return 0;

}
int library :: availability_books(int ido)
{
    id_of_book = ido;
    int printy=map1[id_of_book];
    cout<<"no of copies of id"<<" "<<id_of_book<<":"<<printy;
    return 0;
}
int library::disp()
{
    ifstream f4;
    f4.open("librarymanagement1.txt",ios::in);
    if(!f4)
    {
        cout<<"error in opening file librarymanagement display";
        return -1;
    }
    string s;
    while (getline(f4,s))
    {
       cout<<s<<endl;
    }
   
    if(f4.fail())
    {
        cout<<"error in closing file";
        return -1;
    }
    return 0;

}
int main()
{
    cout << "                  ######@!## STUDENT LIBRARY MANAGEMENT SYSTEM ##!@######               ";
    cout << endl
         << endl
         << endl;
    cout << "1.Add a new book to library list" << endl;
    cout << "2.Issue book to the student " << endl;
    cout << "3.Return books" << endl;
    cout << "4.Display availaibility for a specified book" << endl;
    cout <<"5.Display all information"<<endl;
    cout << endl;
    
    
     FILE *f1=fopen("librarymanagement2.txt","r");
    // cout<<"f5.tellg"<<f5.tellg()<<"outside f5"<<endl;
    string ch1;
    if(fscanf(f1,"%d",&ch1)!=EOF)
{
    fclose(f1);
    //cout<<"shivamf1below";
   // cout<<"f5.tellg"<<f5.tellg()<<endl;
    //while(!f5.eof())
    ifstream  f5;
    f5.open("librarymanagement2.txt");
    if(!f5)
    {
        cout<<"Error in opening  f5";
        
    }
    // int flag=0;
    // while(!f5.eof())
    // {
    //     cout<<"shivam"<<endl;
    //    // char ch=(char)f5.get();
    //     flag++;
    //     break;
    // }
  // if(flag>0)
  while(!f5.eof())
    {
        int id5,cop5;
       // cout<<"inside f5 after flag"<<endl;
        f5>>id5;
        f5>>cop5;
        map1[id5]=cop5;

    }
//    else
//     {
//        cout<<"f5 file is empty";
//     }
   
   // cout<<"outside f5 after else"<<endl;
    f5.close();
    // cout<<f5.bad();
    if(f5.fail())
    {
        cout<<"Error in closing  f5 ";
       //return -1;
    }
}
ifstream f9;
   
    FILE *f2=fopen("librarymanagement3.txt","r");
    //cout<<"f5.tellg"<<f5.tellg()<<"outside f9"<< endl;
    string ch2;
   if(fscanf(f2,"%d",&ch2)!=EOF)
{
    fclose(f2);
    //cout<<"shivamf2below"<<endl;
     f9.open("librarymanagement3.txt");
    if(!f9)
    {
        cout<<"Error in opening  f9 ";
       return -1;
    }
   // cout<<"f5.tellg"<<f5.tellg()<< endl;
    // int  flag=0;
    // while(!f9.eof())
    // {
    //     cout<<"shivamf9"<<endl;
    //     //char ch=(char)f9.get();
    //     flag++;
    //     break;
    // }
//    if(flag>0)
while(!f9.eof())
    {
       // cout<<"inside f9 after flag ";
        int def,roll_no9;
        f9>>roll_no9;
        f9>>def;
        map2[roll_no9]=def;
        
    }
//    else
//     {
//        cout<<"file is empty";
//     }
//     cout<<"outside f9 after else"<<endl;
  
    
    //if(f9.tellg()!=0)
    
       // while(!f9.eof())
    
    f9.close();
    if(f9.fail())
    {
        cout<<"Error closing f9 ";
      //  return -1;
    }

}
    int id, cop, x, roll_no;
    string nam, name_of_student1, name_of_book1;
    int date1, month1, year1, date1r, month1r, year1r;
    
    cout << "ENTER THE FUNCTION YOU WANT TO PERFORM";
    cin >> x;
    library s1;
    if (x == 1)
    {
        cout << "Enter the book id:";

        cin >> id;
        cout << "Enter the name of the book:";

            
        while (getchar() != '\n');
        getline(cin, nam);
        cout << "Enter the copies of that book: ";

        cin >> cop;

        s1.add_new_books(id, nam, cop);
        
    }
    if (x == 2)
    {
        cout << "Enter the roll no:";
        cin >> roll_no;
        cout << "Enter the name of the student:";
        while (getchar() != '\n');    
        getline(cin, name_of_student1);
        cout << "Enter the id of book to be issued:";
        cin >> id;
        cout << "Enter the name of the book:";
            
        while (getchar() != '\n');
        getline(cin, name_of_book1);
        cout << "Enter the date/month/year of issuing day:";
        cout << "Date:";
        cin >> date1;
        cout << "month:";
        cin >> month1;
        cout << "year:";
        cin >> year1;
       
        s1.issued_books(id, name_of_book1, roll_no, name_of_student1, date1, month1, year1);

       
    }   
    if (x == 3)
    {
        cout << "Enter the roll no:";
        cin >> roll_no;
        cout << "Enter the name of the student:";
        while (getchar() != '\n')
            ;
        getline(cin, name_of_student1);
        cout << "Enter the id of book to be issued:";
        cin >> id;
        cout << "Enter the name of the book:";
            
        while (getchar() != '\n');
        getline(cin, name_of_book1);
        cout << "Enter the date/month/year of issuing day:";
        cout << "Date:";
        cin >> date1;
        cout << "month:";
        cin >> month1;
        cout << "year:";
        cin >> year1;
        cout << "Enter the date/month/year of return day:";
        cout << "Date:";
        cin >> date1r;
        cout << "month:";
        cin >> month1r;
        cout << "year:";
        cin >> year1r;
        s1.return_book(id, name_of_book1, name_of_student1, date1, month1, year1, roll_no, date1r, month1r, year1r);
    }
    if (x == 4)
    {
        cout<<"Enter the id of book :";
        cin>>id;

        s1.availability_books(id);
    }
    if(x==5)
    {
        s1.disp();
    }
    if (x > 5)
    {
        cout << "ENTER THE CORRECT CODE!";
    }
    cout << "\nDO YOU WANT TO CONTINUE";
    cout << "\nEnter y/Y for yes or press any other key to quit";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << main();
    }
    else
    {
        cout << "\nTHANKYOU";
    }

    return 0;
}