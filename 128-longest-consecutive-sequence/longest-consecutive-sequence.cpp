class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin() ,nums.end());
        int n=nums.size();

        if(nums.empty()){
            return 0;
        }

        int maxcount=1;
        int count=1;

        for(int i=1; i<n; i++){
             
             if(nums[i]== nums[i-1]+1){
                count++;
             }else if(nums[i]==nums[i-1]){
             }else{
                count=1;
             }

             maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};