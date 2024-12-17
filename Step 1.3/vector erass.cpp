#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    v.erase(v.begin());
    cout<<endl;
    cout<<"using for each loop : ";
    for(auto it2 : v){
        cout<<it2<<" ";
    }
    cout<<endl;
}