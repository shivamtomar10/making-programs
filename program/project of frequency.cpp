#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int size;
    int x;
    int counta = 0, countb = 0;
    cout << "Enter the size of the vector:";
    cin >> size;
    cout<<"enter the binary string :"<<endl;
    vector<int> vec1;
    vector<int> :: iterator iter = vec1.begin();
    for (int i=0;i<size;i++)
    {
        cout<<"Enter:";
        cin>>x;
        vec1.push_back(x);
        
    }
    // for finding frequency of 0's and 1's
    iter=vec1.begin();
    for (iter; iter < vec1.end(); iter++)
    {
        
        if (*iter == 1)
        {
            counta++;
            
        }
        if (*iter == 0)
        {
            countb++;
            
        }
    }
    cout << "NO.OF 0's:" << countb << endl;
    cout << "NO.OF 1's:" << counta;


   


    return 0;
}