#include<iostream>
#include<stack>
using namespace std;

void stackprac() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<"top of stack= "<<st.top()<<endl;

    st.pop();
    cout<<"top of stack= "<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<"st.empty= "<<bool(st.empty());
    
}

int main() {
    stackprac();
    return 0;
}