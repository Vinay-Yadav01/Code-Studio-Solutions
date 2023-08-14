#include <bits/stdc++.h>

int convert(int N,string &str)
{
    int ans=0;
    for(int i=0;i<N;i++){
        int temp=str[N-i-1]&1;
        if(temp) ans+=temp*pow(2,i);
    }
    return ans;
}
