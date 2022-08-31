class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currmin=prices[0];
       
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if (prices[i]<currmin){
                currmin=prices[i];
            }
            ans=max(ans,prices[i]-currmin);
        }
        return ans;
    }
};