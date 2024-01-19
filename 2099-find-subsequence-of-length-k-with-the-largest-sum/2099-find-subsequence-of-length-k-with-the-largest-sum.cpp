class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>tempresult;
        vector<int>result;
        for(int i=0;i<n;i++){
           
            tempresult.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int kLarge=nums[n-k];
        int  countkLarge=0;
        int l=n-k;
        while(l<n&&nums[l]==kLarge){
            countkLarge++;
            l++;
        }
        
        for(int i=0;i<n;i++){
            if(countkLarge>0&&tempresult[i]==kLarge){
                result.push_back(tempresult[i]);
                countkLarge--;
            }
            else if(tempresult[i]>kLarge){
                result.push_back(tempresult[i]);
            }
            
        }
        
        return result;
        
    }
};