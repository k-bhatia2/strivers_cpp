#include<iostream>
#include<set>
using namespace std;

void setprac() {
    set<int> st;
    st.insert(1);
    // st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    auto it = st.find(3);
    cout<<"it= "<<*(it);
    auto itt = st.find(6);
    cout<<"it= "<<*(itt);
}

int main() {
    setprac();
    return 0;
}