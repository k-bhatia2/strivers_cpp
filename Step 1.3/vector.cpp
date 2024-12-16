#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(4,20);
    v.push_back(69);
    v.emplace_back(420);
    cout<<v[5]<<endl;;
}