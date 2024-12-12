#include<iostream>
using namespace std;


void print1(int n){
    int b=0;
     for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    print1(a);

}