#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    public:
    int real,imaginary;
    ComplexNumbers (int real,int imaginary){
        this->real=real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<this->real<<" + i"<<this->imaginary;
    }
    void plus(ComplexNumbers &b){
        this->real = this->real + b.real;
        this->imaginary = this->imaginary + b.imaginary;
    }
    void multiply(ComplexNumbers &b){
        int real = this->real*b.real - this->imaginary*b.imaginary;
        int imaginary = this->imaginary*b.real + this->real*b.imaginary;
        this->real = real;
        this->imaginary = imaginary;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
