#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    print1(a);
}