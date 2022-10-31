bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    int min1=INT_MAX, min2=INT_MAX;
    for(int i=0; i<n; i++) {
        if(nums[i]<=min1) min1 = nums[i];
        else if(nums[i]<=min2) min2 = nums[i];
        else return true;
    }
    return false;
}
