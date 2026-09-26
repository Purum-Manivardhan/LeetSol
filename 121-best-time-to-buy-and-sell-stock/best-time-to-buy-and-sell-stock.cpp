class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maxpro=0;
     int best=prices[0];
     for(int i=0;i<prices.size();i++){
        if(prices[i]>best){
            maxpro=max(prices[i]-best,maxpro);
        }
        best=min(best,prices[i]);
     }
    return maxpro;
    }
};