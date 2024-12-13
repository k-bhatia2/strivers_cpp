#include<iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
}

void print2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    print1(a);
    print2(a);
}