class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int start=0;

        int pos=0;
        int neg=1;

        while(start<n){
            
            if(nums[start]>0){
                ans[pos]=nums[start];
                pos+=2;
            }
            else{
                ans[neg]=nums[start];
                neg+=2;
            }
            start++;
        }

        return ans;
    }
};