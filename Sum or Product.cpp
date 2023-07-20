#include <bits/stdc++.h> 
#include <math.h>
long long int sumOrProduct(long long int n, long long int q)
{
	long long m = 1000000007, sum = 0;
    if (q == 1) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

    if (q == 2){
        long long prod = 1;
        for (int i = 1; i <= n; i++) {
            prod = (prod * i) % m;
        }
        return prod;
    }
}
