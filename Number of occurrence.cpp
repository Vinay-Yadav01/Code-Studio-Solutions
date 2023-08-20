int firstsearch(vector<int> nums,int n, int target) {
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastsearch(vector<int> nums,int n, int target) {
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int count(vector<int>& arr, int n, int x) {
	int first=firstsearch(arr,n,x);
	int last=lastsearch(arr,n,x);
	if(first==-1) return 0;
	else return last-first+1;
}
