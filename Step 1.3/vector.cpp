#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    cout<<"v[2] = "<<v[2]<<endl;
    vector<int>::iterator it=v.begin();
    cout<<"iterator = "<<*it<<endl;
    it++;
    cout<<"iterator updated= "<<*it<<endl;
    cout<<"v.back = "<<v.back()<<endl;
    cout<<"vector = ";
    for(vector<int>::iterator it1 = v.begin(); it1 !=v.end();it1++){
        cout<<*it1<<",";
    }
    cout<<endl;
}