#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n,x,ans=1;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        ans*=x;
    }
    cout<<ans;
    return 0;
}
