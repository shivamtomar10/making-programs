#include<iostream>
using namespace std;
#include<vector>
void disp(vector<int>  &v)
{
    vector<int> :: iterator iter;
    iter=v.begin();
    for (iter; iter!=v.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;


}
int main()
{
    vector<int> vec1;
    vec1.push_back(89);
    vec1.push_back(65);
    vec1.push_back(10);
    vec1.push_back(3);
    disp(vec1);

   // vec1.pop_back();
   // disp(vec1);
 //   vector<int> :: iterator itr=vec1.begin();
 //  disp(vec1);
 //  vec1.insert(itr+2,45,345);
    
    
    
    
    return 0;
}