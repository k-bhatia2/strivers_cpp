#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
        cout<<" ";
        }
        for(int k=0; k< 2*i+1 ;k++)
        {
            cout<<"*";
        }
            for(int l=0; l<=n-i-1;l++){
                cout<<" ";
            }
            cout<<endl;
        }

        }

void print2(int n){
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        cout<<" ";
        }
        for(int k=0; k<2*n-(2*i+1);k++)
        {
            cout<<"*";
        }
        for(int l=0; l<i;l++)
        {
            cout<<" ";
        }
        cout<<endl;
        }

        }
        
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    print1(a);
    print2(a);
}