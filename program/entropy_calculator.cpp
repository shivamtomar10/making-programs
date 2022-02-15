#include<iostream>
using namespace std;
#include<list>
#include<cmath>
int main()
{
    cout<<"Enter the length of binary string:";
    int x;
    cin>>x;
    list<int> list1,list2;
    int y,counta=0,countb=0;
    double p1,p2,q1,q2,s1;
    cout<<"Enter the binary string of half length for first list "<<endl;
    for(int i=0;i<x/2;i++)
    {
        cout<<"Enter:";
        cin>>y;
        list1.push_back(y);
    }
    cout<<"Enter the binary string of half length for second list "<<endl;
    for(int i=0;i<x/2;i++)
    {
        cout<<"Enter:";
        cin>>y;
        list2.push_back(y);
    }
    list<int> ::iterator iter1=list1.begin();
    for(iter1;iter1!=list1.end();iter1++)
    {
        if(*iter1==0)
        {
            counta++;
        }
        if(*iter1==1)
        {
            countb++;
        }
        
    }
   
    p1=counta/(x/2);
    p2=countb/(x/2);
    q1=log(p1);
    q2=log(p2);
    s1=-(p1*q1+p2*q2);
    cout<<"Entropy of first list is:"<<s1<<endl;


    int countc=0,countd=0;
    double a1,a2,b1,b2,s2;
    list<int> ::iterator iter2=list2.begin();
    for(iter2;iter2!=list2.end();iter2++)
    {
        if(*iter2==0)
        {
            countc++;
        }
        if(*iter2==1)
        {
            countd++;
        }
        
    }
    a1=countc/(x/2);
    a2=countd/(x/2);
    b1=log(a1);
    b2=log(a2);
    s2=-(a1*b1+a2*b2);

    cout<<"Entropy of second list is:"<<s2<<endl;
    int counte=0,countf=0;
    double A1,A2,B1,B2,S;
    list1.merge(list2);
    list<int> :: iterator iter=list1.begin();
    for(iter;iter!=list1.end();iter++)
    {
        if(*iter==0)
        {
            counte++;
        }
        if(*iter==1)
        {
            countf++;
        }
    }
    A1=counte/x;
    A2=countf/x;
    B1=log(A1);
    B2=log(A2);
    S=-(A1*B1+A2*B2);
    cout<<"Entropy of whole list:"<<S<<endl;
    if((s1+s2)==S)
    {
        cout<<"\nq->1"<<" in entropy formula";
    }
    

    return 0;
}