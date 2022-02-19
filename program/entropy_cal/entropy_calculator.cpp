#include<iostream>
using namespace std;


#include<fstream>
#include<list>
#include<cstring>
#include<cmath>

int main()
{
    ifstream f1;
    f1.open("inputofentropy.txt");
    if(!f1)
    {
        cout<<"Error opening file";
        return -1;
    }
    ofstream f2;
    f2.open("outputofentropy.txt",ios::app);
    if(!f2)
    {
        cout<<"Error opening file";
        return -1;
    }

    int entr_val;
    list<int> list1;
    while(!f1.eof())
    {
        f1>>entr_val;
        list1.push_back(entr_val);
    }

    //getline(f1,entr_val);
    //int len =entr_val.length();
    int len =list1.size();
    //cout<<len<<endl;

    double window_size=0;
    cout<<"Enter the size of window:";
    cin>>window_size;


    double no_of_windows=0;
    for(int i=0;i<len;i++)
    {
        if(window_size+i>len)
           break;

        no_of_windows++;
    }
    //for finding the whole string entropy
  /*  double counta=0,countb=0;
    double Ft,St,Et;
    list<string> :: iterator iter=list1.begin();
    for(iter;iter!=list1.end();iter++)
    {
        if(*iter==0)
        counta++;

        if(*iter==1)
        countb++;
    }

    Ft=-((counta/len)*log2f(counta/len));
    St=-((countb/len)*log2f(countb/len));
    Et=Ft+St;

    cout<<Et;*/

    
   
    f2<<"window size:"<<window_size<<endl;
    for(int i=0;i<no_of_windows;i++)
    {
        double countc=0,countd=0;
        list<int> :: iterator iter=list1.begin();
        double St=0,Ft=0,Et=0;
        for (int k = 0; k < i; k++)
        {
            iter++;
        }
        
        for(int j=0;j<window_size;j++)
        {
            if(*iter==1)
            {
                countc++;
            }
            else if(*iter==0)
            {
                countd++;
            }
            iter++;
        }

        Ft=-((countc/window_size)*log2f(countc/window_size));
       // cout<<"ft:"<<Ft<<"  ";
        St=-((countd/window_size)*log2f(countd/window_size));
       // cout<<"St"<<St<<endl;
        Et=Ft+St;
        
        f2<<"Entropy of window"<<i+1<<":"<<Et<<endl;
    }

    f1.close();
    if(f1.fail())
    {
        cout<<"Error closing file";
        return -1;
    } 
    
    f2.close();
    if(f2.fail())
    {
        cout<<"Error closing output file";
        return -1;
    }
    
    
    return 0;
}