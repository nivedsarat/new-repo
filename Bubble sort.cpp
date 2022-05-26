#include <iostream>
#include <chrono>
using namespace std;

void bubblesort(int a[100], int n)
{
    auto start=chrono::steady_clock::now();
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    auto endt=chrono::steady_clock::now();
    auto time=endt-start;
    cout<<endl<<"Time taken for sorting is "<<chrono::duration<double,milli>(time).count()<<" ms \n"<<endl;
}
int main()
{
    int a[100],n;
    n=100;
    cout<<"Initial array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%10;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubblesort(a,n);
    cout<<endl<<"Sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

