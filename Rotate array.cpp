#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        temp[i]=arr[(i+k)%n];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
