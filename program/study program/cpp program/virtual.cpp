#include<iostream>
using namespace std;

// class s1
// {
//     protected:
//     int x;
//     public:
//         s1(int a)
//         {
//             x=a;
//             cout<<"s1 constructor"<<endl;
//         }
//         void func1()
//         {
//             cout<<"x:"<<x<<endl;
//             cout<<"Base class"<<endl;
//         }
//         ~s1()
//         {
//             cout<<"s1 destructor"<<endl;
//         }
// };
// class s2:public s1
// {
//     int y;
//     public:
//     s2(int a,int b):s1(b)
//     {
//         y=a;
//         cout<<"s2 constructor"<<endl;
//     }
//     void func1()
//     {
//         cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
//         cout<<"Derived class"<<endl;
//     }
//     ~s2()
//     {
//         cout<<"s2 destructor"<<endl;
//     }

// };

// int main()
// {
//     s1 ob1(5);
//     ob1.func1();

//    s2 ob2(3,6);
//    ob2.func1();
//     return 0;

// }

// class s1
// {
//     protected:
//     int x;
//     public:
//     s1()
//     {
//         x=2;
//         cout<<"s1 const"<<endl;
//     }
//     void func1();
//     ~s1()
//     {cout<<"s1 destr"<<endl;}
// };
// void s1::func1()
// {
//     cout<<"x:"<<x<<endl;
// }
// class der:public s1
// {
//     int r;
//     public:
//     der()
//     {
//         r=9;
//         cout<<"der constr"<<endl;
//     }
//     void func1()            //overriding
//     {
//         cout<<"r:"<<r<<endl;
//     }
//     ~der()
//     {
//         cout<<"der destr"<<endl;
//     }
// };

// int main()
// {
//     s1 ob1;
//     ob1.func1();

//     der ob2;
//     ob2.func1();
//     return  0;
// }

// class s1
// {
//     protected:
//     int x;
//     public:
//     virtual void func1()            //forming virtual class
//     {
//         x=9;
//         cout<<"x:"<<x<<endl;
//         cout<<"hello everyone"<<endl;
//     }

// };
// class s2:public s1{
//     int y;
//     public:
//     void func1()
//     {
//         y=0;
//         cout<<"y:"<<y<<endl;
//         cout<<"lol"<<endl;
//     }
// };
// int main()
// {
//     s1* ptr=new s1();
//     ptr->func1();
//     ptr=new s2();
//     ptr->func1();
//     return 0;
// }
// class s1
// {
//     protected:
//     int x;
//     public:
//     virtual void func1() =0;         //pure virtual function
//     // {
//     //     x=9;
//     //     cout<<"x:"<<x<<endl;
//     //     cout<<"hello everyone"<<endl;
//     // }

// };
// class s2:public s1{
//     int y;
//     public:
//     void func1()
//     {
//         y=0;
//         cout<<"y:"<<y<<endl;
//         cout<<"lol"<<endl;
//     }
// };
// int main()
// {
//     // s1* ptr=new s1();    //you cannot make a object of abstract class
//     // ptr->func1();
//     s1 *ptr=new s2();
//     ptr->func1();
//     return 0;
// }

 class shivam
{
    int x;
    // shivam()             //by constructors in
                            //   private section you cannot declare object of that class 
    // {
    //     cout<<"shivam constr"<<endl;
    // }
    public:
    void set(int a)
    {
        x=a;
        cout<"x:"<<x<<endl;
    }
}harry ,poter,manik;
int main()
{
    //shivam s;
    harry.set(8);
    
    return 0;

}
