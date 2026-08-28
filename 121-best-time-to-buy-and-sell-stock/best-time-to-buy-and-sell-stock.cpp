class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int buy[100000];
       buy[0]=prices[0];

       for(int i=1; i<n; i++){
        buy[i] = min(buy[i-1] , prices[i] );
       }

       int profit=0;

       for(int i=0; i<n; i++){
        int curr = prices[i]-buy[i];
        profit=max(profit ,curr);
       }

       return profit;
    }
};