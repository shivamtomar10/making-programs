#include<iostream>
using namespace std;

#include<map>
void disp(map<string,int> &c)
{
    map<string ,int> ::iterator iter=c.begin();
    for(iter;iter!=c.end();iter++ )
    {
        cout<<iter->first<<" "<<iter->second;
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    map<string,int>  st;
    st["shivam"]=90;
    st["riya"]=67;
    disp(st);
    st.insert({{"farukh",76},{"faizan",54}});
    disp(st);
    

    return 0;
}