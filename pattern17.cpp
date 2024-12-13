#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
        cout<<" ";
        }
        char ch='A';
        int br=(2*i+1)/2;
        for(int k=0;k<2*i+1;k++){
            cout<<ch;
            if(k<br) ch++;
            else ch--;
        }
            for(int l=0; l<=n-i-1;l++){
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
}