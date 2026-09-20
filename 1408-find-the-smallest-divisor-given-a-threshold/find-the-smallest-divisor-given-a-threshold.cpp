class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
             
        long long start = 1;
        long long  end=*max_element(nums.begin(), nums.end());
        
        while(start<end){
           long long mid=(start+end)/2;
            long long  value=0;

             for (long long  j = 0; j < nums.size(); j++) {
                value += ((long long )nums[j] + mid - 1) / mid;
            }
            if(value<=threshold){
                end=mid;
               
            }else{
                start=mid+1;
            }
        }
         return start;
    }
};