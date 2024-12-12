#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter your age";
    int age;
    cin>>age;

    if (age>=18){
        cout<<"You are an adult";

    }

    else if(age>=0){
        cout<<"You are not an adult";
    }

    else{
        cout<<"invalid input";
    }

    return 0;
}