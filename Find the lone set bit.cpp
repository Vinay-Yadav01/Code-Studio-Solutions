#include <bits/stdc++.h> 
int findSetBit(int N) {   
    for(int i=0;i<32;i++){
        if(pow(2,i)==N) return i+1;
    }
    return -1;
}

