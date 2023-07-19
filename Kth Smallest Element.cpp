int kthSmallest(int n,int k,vector<int> input)
{
    sort(input.begin(),input.end());
    return input[k-1];
}
