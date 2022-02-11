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

     //finding frequency of 00's , 01's , 10's and 11's
    iter=vec1.begin();
    int countc=0,countd=0,counte=0,countf=0;
    
    for(iter;iter!=vec1.end();iter++)
    {
       int x=*iter;
       int y=*(iter+1);
       
       iter++;
       
       if(x==0)
       {
           if(y==0)
           {
               countc++;
           }
           if(y==1)
           {
               countd++;

           }

       }
       if(x==1)
       {
           if(y==0)
           {
               counte++;
           }
           if(y==1)
           {
               countf++;
           }
       }

    }
    cout<<"no.of 00's:"<<countc<<endl;
    cout<<"no.of 01's:"<<countd<<endl;
    cout<<"no.of 10's:"<<counte<<endl;
    cout<<"no.of 11's:"<<countf<<endl;


   


    return 0;
}