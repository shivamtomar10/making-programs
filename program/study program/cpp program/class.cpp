#include<iostream>
using namespace std;
/*class mynum
{
    int a,b,c;
    char t;
    public:
            int d,e;
            char g;
            void func1(int a,int b,int c,char t);
            
}mn;

void mynum::func1(int a,int b, int c,char t)
{
    d=a;
    e=b;
    g=t;
    cout<<a;

}*/


/*int main()
{
    
  /*  mn.func1(1,34,42,'e');
  //  mn.a=5;            //this also cannot work
    mn.d=676;           //it can be chenged as public
    cout<<mn.d<<endl<<mn.e<<endl<<mn.g;
   // cout<<mn.a;           //it will not work as a declared as private and only be accessed by member function     

   

    return 0;

}*/
//static data member and static member function

/*class employee
{
    int id;
    int salary;
     static int count;
    public:
          void setdata(void)
          {
            cout<<"enter your id:";
            cin>>id;
            
            cout<<"employee no:"<<count<<endl;
            count++;

          }
          void getdata(void)
          {
              cout<<"your id is :"<<id<<endl;
           
          }
};

int employee::count=1000;
int main()
{
    employee e,d,f;
    e.setdata();
    e.getdata();

    d.setdata();
    d.getdata();

    f.setdata();
    f.getdata();






}*/

//friend function   //samaj pura nhi aaya baad ma dekna ha

/*class employee
{
  int a,b;
  string s;
  public:
        void func1(int v1,int v2)
        {
          a=v1;
          b=v2;
          cout<<"the complex no:"<<a<<" "<<"+ "<<"i"<<b;
          
        }
        friend int sum(employee s);
        
        
};
int sum(employee s)
{
    return s.a+s.b;
}
int main()
{
  employee e;
  
  e.func1(2,5);
  cout<<sum(e);


  return 0;
}*/
//adding two complex by class(objects passed as parameter)

/*class shivam
{
    int a,b;
    int count;
    public:
            void func1(int v1,int v2)
            {
              a=v1;
              b=v2;
              cout<<"the complex no:"<<a<<" "<<"+"<<"i"<<b;
            }
           void func2(int a, int b)
            {
              cout<<"\nthe complex no:"<<a<<" "<<"+"<<"i"<<b<<endl;
            }
            void func3(shivam o1,shivam o2)
            {                                                       
              cout<<o1.a<<endl<<o1.b;
              cout<<o2.a<<endl<<o2.b;
              
              a=o1.a+o2.a;
              b=o1.b+o2.b;
              cout<<"complex:"<<a<<" "<<"+"<<"i"<<b;
            }
};

int main()

{
  shivam s1,s2,s3;
  s1.func1(2,3);
  cout<<endl;
  s2.func1(3,4);
  cout<<endl;
  s3.func3(s1,s2);

  return 0;
}*/
//array of objects
/*class shivam{
    int id,b;
    public:
            void func1(void)
            {
             cout<<"enter";
             cin>>id;
            }
            void func2(void)
            {
              cout<<"yourid"<<id;
            }
};
int main()
{
  shivam a[3];
  for(int i=0;i<4;i++)
  {
    a[i].func1();
    a[i].func2();
  }
  
  return 0;
}*/

