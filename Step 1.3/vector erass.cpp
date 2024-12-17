#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    // v.erase(v.begin());
    // cout<<endl;
    cout<<"using for each loop : ";
    for(auto it2 : v){
        cout<<it2<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+3,v.begin()+7);
    cout<<endl;
    for(auto it3 : v){
        cout<<it3<<" ";
    }
    cout<<endl;
}