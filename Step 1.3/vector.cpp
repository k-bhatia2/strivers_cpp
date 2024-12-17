#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    cout<<"v[3] = "<<v[3]<<endl;
    vector<int>::iterator it=v.begin();
    cout<<"iterator = "<<*it<<endl;
    it++;
    cout<<"iterator updated= "<<*it<<endl;
}