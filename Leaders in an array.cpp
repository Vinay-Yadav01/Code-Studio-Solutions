#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
     vector<int> ans; 
    int curr_leader = elements[n - 1];
    ans.push_back(curr_leader);
    for(int i = n - 2;i>=0;i--){
      if (curr_leader < elements[i]) {
        curr_leader = elements[i];
        ans.push_back(curr_leader);
      }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
