class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;

        while(start<end){
            if(nums[start]%2==0 && nums[end]%2==1){
                start++;
                end--;
            
            }else if(nums[start]%2==0 && nums[end]%2==0){
                 start++;
            }else if(nums[start]%2==1&& nums[end]%2==1){
                end--;
            }else{
                int temp =nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
              start++;
                end--;
            }
        }
        return nums;
    }
};