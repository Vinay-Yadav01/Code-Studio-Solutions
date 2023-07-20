#include <bits/stdc++.h> 
int magicIndex(vector<int> a, int n) {
	for(int i=0;i<n;i++){
		if(i==a[i]) return i;
	}
	return -1;
}
