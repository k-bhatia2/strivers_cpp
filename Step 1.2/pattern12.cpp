#include<iostream>
using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=n+1;k>=2*(i-1);k--){
            cout<<" ";
        }
        for(int l=i;l>0;l--){
            cout<<l;
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