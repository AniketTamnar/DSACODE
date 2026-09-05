class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;

        while(start<end){
            if(nums[start]%2==0 && nums[end]%2==1){
                start+=1;
                end-=1;
            
            }else if(nums[start]%2==0 && nums[end]%2==0){
                 start+=1;
            }else if(nums[start]%2==1&& nums[end]%2==1){
                end-=1;
            }else{
                int temp =nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
              start+=1;
                end-=1;
            }
        }
        return nums;
    }
};