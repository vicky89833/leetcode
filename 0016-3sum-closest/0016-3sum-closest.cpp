class Solution {
public:
    
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
     // sort  
        sort(nums.begin(),nums.end());
        
        int closestSum=100000;
        vector<int> result;
        for(int k=0;k<n-2;k++) {
            
            int i=k+1;
            int j=n-1;
            while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(closestSum-target)){
                    closestSum=sum;
                }
                
                
                if(target>sum){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        return closestSum;
    }
};