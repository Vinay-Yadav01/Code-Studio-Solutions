int countBits(int n){
    int ans=0;
    while(n!=0){
        if(n&1) ans++;
        n>>=1;
    }
    return ans;
}

int countSetBits(int n) {
    int ans=0;
    for(int i=0;i<=n;i++){
        ans+=countBits(i);
    }
    return ans;
}
