class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int start=0;
        int j=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                temp++;
                if(temp==max(count,temp)){
                     start=j;
                     count=temp;
                }
                
                
            }
            else{
                j=i;
                temp=0;
            }
            
        }
        return count;
       
    }
};