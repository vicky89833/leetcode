class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        long long max_sum=LLONG_MIN;
        long long temp_sum=0;
        int start=-1;
        int end=n;
        for(int i=0;i<n;i++){
                
                if(temp_sum==0){
                    start=i;
                }
                temp_sum+=nums[i];
                if(temp_sum>max_sum){
                    max_sum=temp_sum;
                    end=i;
                }
                if(temp_sum<0){
                   temp_sum=0;
                }
                
        }
        return max_sum;
    }
};