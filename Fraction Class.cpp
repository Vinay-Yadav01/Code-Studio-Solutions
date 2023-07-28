#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
    public:
    int Numerator,Denominator;
    Fraction(int Numerator,int Denominator){
        this->Numerator = Numerator;
        this->Denominator = Denominator;
    }
    void add(Fraction &b){
        this->Numerator = this->Numerator*b.Denominator + this->Denominator*b.Numerator;
        this->Denominator = this->Denominator * b.Denominator;
        simplify();
    }
    void multiply(Fraction &b){
        this->Numerator = this->Numerator * b.Numerator;
        this->Denominator = this->Denominator * b.Denominator;
        simplify();
    }
    void simplify(){
        int gcd =  __gcd(this->Numerator,this->Denominator);
        this->Numerator  = this->Numerator/gcd;
        this->Denominator = this->Denominator/gcd;
    }
    void print(){
        cout<<this->Numerator<<"/"<<this->Denominator<<endl;
    }
};

int main() {
    int num1,den1;
    cin>>num1>>den1;
    Fraction frac1(num1,den1);
    int N;
    cin>>N;
    while(N--){
        int query,num2,den2;
        cin>>query>>num2>>den2;
        Fraction frac2(num2,den2);
        switch (query){
            case 1: frac1.add(frac2);
                    frac1.print();
                    break;
            case 2: frac1.multiply(frac2);
                    frac1.print();
                    break;
        }
    }
    return 0;
}
