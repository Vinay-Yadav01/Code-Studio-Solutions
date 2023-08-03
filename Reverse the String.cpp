#include <bits/stdc++.h> 
string reverseString(string str)
{
	int s=0,e=str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
	return str;
}
