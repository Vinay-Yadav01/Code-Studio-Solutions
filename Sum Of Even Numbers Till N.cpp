#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    long long ans=0;
    for(int i=2;i<=n;i+=2){
        ans+=i;
    }
    return ans;
}
