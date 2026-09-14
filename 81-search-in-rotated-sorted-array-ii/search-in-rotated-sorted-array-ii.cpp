class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            int mid=(start+end)/2;

            if(nums[mid]==target){
                return true;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
};