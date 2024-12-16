#include<iostream>
using namespace std;

void print1(int n){
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num++;
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