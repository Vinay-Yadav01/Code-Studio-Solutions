int searchInsert(vector<int> &arr, int m)
{
	int ans=0,s=0,e=arr.size()-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if (arr[mid]<m){
			s=mid+1;
			ans=mid+1;
		}
		else{
			e=mid-1;
			ans=mid;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
