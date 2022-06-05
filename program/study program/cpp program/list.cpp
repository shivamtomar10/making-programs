#include<iostream>
using namespace std;

#include<list>
void disp(list<int> &li)
{
    list<int> ::iterator iter=li.begin();
    for(iter;iter!=li.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;        //list creation of size 0
    list<int> list2;      //creation of list with four space for data
   // list<int> list2(4);       //creation of list with four zero as data
    list1.push_back(3);
    list1.push_back(45);
    list1.push_back(90);
    disp(list1);
    //list<int> ::iterator p;
   // p=list1.begin();
   // list1.insert(p,200);          //inserting 200 at begin
   // disp(list1);
  // p=list1.end();
  // list1.insert(p,3,20);        //inserting at the end 
  // disp(list1);
  //list1.pop_back();
  //list1.remove(45);
  //disp(list1);
  //cout<<endl;
 //list2.push_back(9);
 //disp(list2);
 //cout<< list2.empty();
 list2.push_back(76);
 list2.push_back(43);
 list2.push_back(53);
 list2.push_back(87);
 //disp(list2);
 //list1.sort();
 //list2.sort();      //ascending order
 //list1.merge(list2);
 //disp(list1);
 list1.reverse();
 disp(list1);

 //list2.pop_front();
 //disp(list2);




    return 0;
}