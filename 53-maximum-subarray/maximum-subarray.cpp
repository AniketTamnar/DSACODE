class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
     int max1=nums[0];
     int curr=nums[0];
        for(int i=1; i<n; i++){
            curr = max(nums[i], curr+nums[i]);
            if(curr > max1){
                max1 = curr;
            } 
        }
        return max1;
    }
};