class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
             long long start=1;
             long long end=*max_element(piles.begin(), piles.end());
          while(start<=end){
            long long mid=(start+end)/2;
        long long hour=0;

        for(long long  pile : piles){
            hour+=(long long)(pile+mid-1)/mid;
        }
        if(hour<=h){
            end=mid-1;
        }else{
            start=mid+1;
        }
          }
      return start;
    }
};