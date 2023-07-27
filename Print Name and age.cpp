#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {
    string name;
    int age;
    public:
    void SetValue(string &name,int &age){
        this->name = name;
        this->age = age;
    }
    void GetValue(){
        cout << "The name of the person is "<< this->name <<" and the age is "<<this->age<<".";
    }
};

int main() {
    Person p;
    string name;
    cin>>name;
    int age;
    cin>>age;
    p.SetValue(name,age);
    p.GetValue();
    return 0;
}
