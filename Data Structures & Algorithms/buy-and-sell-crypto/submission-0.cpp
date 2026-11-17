class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int maxProfit = 0;
        for(int r = 0; r < prices.size(); r++){
            if(prices[r] < prices[l]){
                l = r;
            }
            else{
                maxProfit = max(prices[r] - prices[l], maxProfit);
            }
        }
        return maxProfit;
    }
};
