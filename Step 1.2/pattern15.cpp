#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
            // ch--;
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