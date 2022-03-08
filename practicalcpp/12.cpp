#include<iostream>
using namespace std;

int c[10][10];
int d[10][10];
int e[10][10];
class matrix
{
    int arr[10][10];
    int r1,c1;
    public:
    matrix(){}
    matrix(int r,int c)
    {
        r1=r;
        c1=c;
    }

    void get(int r,int c);
    int sum(matrix o1,matrix o2);
    void print(int t);
    int mul(matrix o1, matrix o2);
    void transpose();

};
void matrix::get(int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             cout << "Enter the value at index"
                               << "[" << i << "]"
                               << "[" << j << "]";
            cin>>arr[i][j];
        }
    }

}
int  matrix::sum(matrix o1,matrix o2)
{
      if(o1.r1==o2.r1 && o1.c1==o2.c1)
    {
       
        for(int i=0;i<o1.r1;i++)
        {
            for(int j=0;j<o1.c1;j++)
            {
                // cout<<"o1"<<o1.arr[i][j]<<endl;
                // cout<<"o2"<<o2.arr[i][j]<<endl;

                c[i][j]=o1.arr[i][j]+o2.arr[i][j];
                // cout<<"o1"<<o1.c[i][j]<<endl;

            }
        }
        return 1;
    }
    else
    {
        cout<<"The sum of these two matrices cannot be determined due to inequiality of size of these two matrices";
        return 0;
    }
}
void matrix::print(int t)
{
    if(t==1 || t==2)
    {
    for (int i = 0; i < this->r1; i++)
    {
        for (int j = 0; j <  this->c1; j++)
        {
            if(t==1)
            cout<<c[i][j]<<" ";
            else if(t==2)
            cout<<d[i][j]<<" ";
                       
        }  


        cout<<endl;
    }
    }
    if(t==0)
   {
        for(int i=0;i<this->c1;i++)
        {
            for(int j=0;j<this->r1;j++)
            {
                cout<<e[i][j]<<" ";
            }
            cout<<endl;
        }
   }
}
int matrix::mul(matrix o1,matrix o2)
{
    if(o1.c1==o2.r1)
    {
        for(int i=0;i<o1.r1;i++)
        {
            for(int j=0;j<o2.c1;j++)
            {
                for(int k=0;k<o1.c1;k++)
                d[i][j]+=o1.arr[i][k]*o2.arr[k][j];
            }
        }
        return 1;
   }
   else
   {
       cout<<"The multiply of these two matrices cannot be determined because condition of matrix cannot satisfied";
        return 0;
   }
}
void matrix::transpose()
{
    for(int i=0;i<this->r1;i++)
    {
        for(int j=0;j<this->c1;j++)
        {
            e[j][i]=this->arr[i][j];
        }
    }
}

int main()
{
    cout << "1.Sum of Matrices " << endl;
    cout << "2.Product of Matrices" << endl;
    cout << "3.Transpose of Matrices" << endl;
    int x;
    cout << "Enter the operation you want to perform:";
    cin >> x;
    int r1, c1,r2,c2;
    if (x >= 1 && x <= 3)
    {
        switch (x)
        {
            case 1:
            {
                cout << "Enter the no. of rows for first matrix(not more than 10):";
                cin >> r1;
                cout << "Enter the no. of columns for first matrix(not more than 10):";
                cin >> c1;

                try
                {
                    if(r1>10 || c1>10)
                    {
                        
                        throw(0);
                    }

                }
                catch(int x)
                {
                    cout<<"The size of first matrix is greater than 10*10"<<endl;
                    exit(-1);
                }
                
               

                
                cout << "\nEnter the no. of rows for second matrix(not more than 10):";
                cin >> r2;
                cout << "Enter the no. of columns for second matrix(not more than 10):";
                cin >> c2;
                 
                try
                {
                    if(r2>10 || c2>10)
                    {
                       
                        throw('d');
                    }
                   
                }
                catch(char ch)
                {
                    cout<<"The size of second matrices is greater than 10*10"<<endl;
                    exit(-1);
                }
                
               
                    matrix m1(r1,c1);
                    cout<<"\nEnter the value into the first matrices:"<<endl;
                    m1.get(r1,c1);
                    matrix m2(r2,c2);
                    cout << "\nEnter the value into the second matrices:" << endl;
                    m2.get(r2,c2);
                    cout<<"The sum of two matrices is:"<<endl;
                    matrix m3;
                    int f=m3.sum(m1,m2);
                    if(f==1)
                    m1.print(1);
                    
               
               break;
            }
            case 2:
            {
               
                
                cout << "Enter the no. of rows for first matrix(not more than 10):";
                cin >> r1;
                cout << "Enter the no. of columns for first matrix(not more than 10):";
                cin >> c1;
                 try
                {
                    if(r1>10 || c1>10)
                    {
                       
                        throw(1);

                    }
                   
                }
                catch(int x)
                { 
                    cout<<"The size of first matrices is greater than 10*10"<<endl;
                    exit(-1);
                }
               
                cout << "\nEnter the no. of rows for second matrix(not more than 10):";
                cin >> r2;
                cout << "Enter the no. of columns for second matrix(not more than 10):";
                cin >> c2;
                try
                {
                    if(r2>10 || c2>10)
                    {
                       
                        throw('s');
                    }
                }
                catch(char ch)
                {
                    cout<<"The size of second matrices is greater than 10*10"<<endl;
                    exit(-1);
                }
               
              

               matrix m1(r1,c1);
               cout<<"\nEnter the value into the first matrices:"<<endl;
                m1.get(r1,c1);
                matrix m2(r2,c2);
                cout << "\nEnter the value into the second matrices:" << endl;
                m2.get(r2,c2);
                matrix m3;
                int f=m3.mul(m1,m2);
                if(f==1)
                m1.print(2);
                break;
            }
            case 3:
            {
               
                cout << "Enter the no. of rows for  matrix(not more than 10):";
                cin >> r1;
                cout << "Enter the no. of columns for  matrix(not more than 10):";
                cin >> c1;
                try
                {
                    if(r1>10 ||c1>10)
                    {
                       
                        throw(6);
                    }
                    
                }
                catch(int x)
                {
                    cout<<"The size of  matrices is greater than 10*10"<<endl;
                    exit(-1);
                }
                
               
                matrix m1(r1,c1);

                cout<<"\nEnter the value into the  matrices:"<<endl;
                m1.get(r1,c1);
                m1.transpose();
                cout<<"The matrix after transpose is:"<<endl;
                m1.print(0);
                break;
            }
        }
    }
    
    else
    {
        cout << "Enter the correct code " << endl;
    }

    return 0;
    
}