class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> a;

        for(int i=0; i<nums.size(); i++){
            a.push_back({nums[i],i});
        }
       
       sort(a.begin(),a.end());
        int start = 0;
        int end = a.size() - 1;

        while(start<end){
            int sum= a[start].first+a[end].first;
            if(sum==target){
             return{a[start].second, a[end].second};
            }else if(sum< target){
                start++;
            }else{
                end--;
            }
        }

        return {};
    }
};