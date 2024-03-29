#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int arr1[26]={0},arr2[26]={0},size=0;
    for(int i=0;input1[i]!='\0';i++){
        int ch = input1[i]-'a';
        arr1[ch]++;
    }
    for(int i=0;input2[i]!='\0';i++){
        int ch = input2[i]-'a';
        arr2[ch]++;
    }
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]) return false;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
