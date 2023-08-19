#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;
    for(int i=0;i<k;i++){
        int val=q.front();
        s.push(val);
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int t=q.size()-k;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
