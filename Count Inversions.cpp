#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    long long int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i<j && arr[i]>arr[j]) ans++;
        }
    }
    return ans;
}
