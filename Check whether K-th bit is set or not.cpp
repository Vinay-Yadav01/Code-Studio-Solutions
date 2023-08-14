bool isKthBitSet(int n, int k)
{
    for(int i=1;i<k;i++){
        n>>=1;
    }
    return n&1;
}
