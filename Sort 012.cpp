#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int left = 0;
    int right = n-1;
    int mid = 0;

    while(mid<=right){
        if(arr[mid] == 0){
            swap(arr[left],arr[mid]);
            left++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid] == 2){
            swap(arr[mid],arr[right]);
            right--;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
