#include <iostream>
using namespace std;
#include <list>
#include <cmath>
#include <cstring>
#include <fstream>
int main()
{
    ifstream f1;
    ofstream f2;
    f1.open("test_input.csv", ios::in);
    if (!f1)
    {
        cout << "Error opening file";
        return -1;
    }
    int str;
    list<int> list1;
    while (!f1.eof())
    {
        f1 >> str;
        list1.push_back(str);
    }
    f2.open("result.txt", ios::app);
    if (!f2)
    {
        cout << "Error opening result file";
    }

    int len = list1.size();
    int window_size = 0;
    cout << "Enter the size of your window:";
    cin >> window_size;
    int u = 0;
    int no_of_window = 0;

    for (int i = 0; i < len; i++)
    {
        if (i + window_size > len)
            break;

        no_of_window++;
    }
    f2 << "Window size:" << window_size << endl;

    double count = 0, s1;
    for (int i = 0; i < no_of_window; i++)
    {
        list<int>::iterator iter = list1.begin();
        for (int y = 0; y < i; y++)
        {
            iter++;
        }
        u = 0;

        for (iter; u < window_size; iter++)
        {
            u++;
            if (*iter == 1)
                count++;
        }

        s1 = -((count / len) * (log2f(count / len)));
        f2 << "Entropy of " << i + 1 << ":" << s1 << endl;
    }
    f1.close();
    if (f1.fail())
    {
        cout << "Error in closing file";
        return -1;
    }
    f2.close();
    if (f2.fail())
    {
        cout << "Error in closing file";
        return -1;
    }

    return 0;
}
