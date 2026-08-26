class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int holding = 0;
        int buy;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(!holding){
                holding = 1;
                buy = prices[i];
            }
            if(prices[i] < buy && holding){
                buy = prices[i];
            }
            else if(prices[i] > buy && holding){
                profit = max(profit,prices[i] - buy);
            }
        }
        return profit;
    }
};