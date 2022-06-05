#include<iostream>
using namespace std;

int main(int argc,char* argv[])
{
  //  cout<<argc;
    for(int i=0;i<argc;i++)
    {
      for(int j=0;j<argc;j++)
        cout<<"value at index"<<i<<argv[i][j]<<endl;
    }
    return 0;
}
