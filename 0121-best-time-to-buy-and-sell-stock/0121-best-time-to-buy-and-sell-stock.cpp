class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int min_index=n;
        int max_index=n;
        int temp_m_index=0;
        for(int i=1;i<n;i++){
            if(profit<prices[i]-prices[temp_m_index]){
                int cost=prices[i]-prices[temp_m_index];
                 profit=cost;
                 max_index=i;
                min_index=temp_m_index;
            }
            if(prices[i]==min(prices[i],prices[temp_m_index])){
                temp_m_index=i;
            }
            
        }
        
        if(min_index== max_index){
            return 0;
        }
       
        
       
        return prices[max_index]-prices[min_index];
    }
};