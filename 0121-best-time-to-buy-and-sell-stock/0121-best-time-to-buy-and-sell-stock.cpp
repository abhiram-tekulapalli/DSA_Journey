class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min =INT_MAX;
        int best_price=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int price = prices[i]-min;
            if(price>best_price){
                best_price=price;
            }
        }
        return best_price;
    }
};