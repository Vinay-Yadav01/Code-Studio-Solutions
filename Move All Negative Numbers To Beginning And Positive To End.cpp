#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int s=0,e=nums.size()-1;
    while(s<e){
        while(nums[s]<0 && s<e){
            s++;
        }
        while(nums[e]>=0 && s<e){
            e--;
        }
        if(s<e) swap(nums[s++],nums[e--]);
    }   
    return nums;
}
