#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    if((x>y and x<z) or (x<y and x>z)) return x;
    else if((y>x and y<z)or (y<x and y>z))return y;
    else return z;
}
