#include<iostream>
using namespace std;
#include<fstream>
#include<cstring>
#include<map>
#include<algorithm>
#include<cmath>

int func1(int arr[],int x);

int main()
{
    ifstream f1;
    f1.open("input.txt");
    if(!f1)
    {
        cout<<"Error in opening file";
        return -1;
    }
    int x;
    int arr[10000];
    int i=0;
    while(f1.eof()!=1)
    {
        f1>>x;
        arr[i]=x;
        i++;
    }

    map<int ,double> map1;
    
    for(int i=0;arr[i]!=0;i++)
    {
        map1[arr[i]]++;
    }
    // to remove the duplicates from the array

    int z=func1(arr,i);

    // to print the array elemnts after removing duplicates
    /*for(int i=0;i<z;i++)
    {
        cout<<"The elements at index of arr"<<"["<<i<<"]"<<arr[i]<<endl;
    }*/

    for(int i=0;i<z;i++)
    {
        if(map1[arr[i]]!=0)
        {
            cout<<"The frequency of "<<arr[i]<<":"<<map1[arr[i]]<<endl;
        }
    }
    // now we are going to perform shannon entropy 
    // we are going to do tsallis entropy

    double S=0;
    i--;
    float q;
    cout<<"Enter the value of q:";
    cin>>q;
    double r1,S1=0;
    
    for (int k = 0;k <=i; k++)
    {

        double p1=map1[arr[k]]/i;
        double q1=p1*log2f(p1);
        double r=p1*(q1);
        S-=r;
        r1=pow(p1,q);
        S1+=r1;
    }
    double S2=1*(1-S1)/(q-1);
    cout<<"The output of tsallis entropy"<<S2<<endl;

    cout<<"The result after adding respevtive pi*logpi"<<":"<<S<<endl;
    cout<<"Average of this resul"<<S/i<<endl;
    

    return 0;
}
int func1(int arr[], int x)
{
    if(x==1 ||x==0)
    {
        return x;
    }
    sort(arr,arr+x);
    int j=0;
    int temp[x];
    for(int i=0;i<x-1;i++)
    {
        if(arr[i]!=arr[i+1])
        { 
           temp[j]=arr[i];
          j++;
        }
    }
   
   
    temp[j++]=arr[x-1];
 
    for(int i=0;i<j;i++)
    {
       
        arr[i]=temp[i];
    }
   
    return  j;

    return 0;
}