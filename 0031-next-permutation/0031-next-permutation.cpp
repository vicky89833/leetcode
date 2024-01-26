class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return;
        }
        
        //find turning point =means the pooint where nums[i]<nums[j]
        int turning_point=n-1;
        
        for(int i=n-2;i>=0;i--){
          
           if(nums[i]<nums[i+1]) { 
               turning_point=i;
               break;
           }
            
        }
    
        if(turning_point == n-1){
            sort(nums.begin(),nums.end());
            return;
        }
        
        int close_greater=turning_point+1; //number just greater than turning point
        for(int i=turning_point+1;i<n;i++){
            if(nums[i]>nums[turning_point]&&nums[i]<nums[close_greater]){
                close_greater=i;
            }
        }
        
        int temp=nums[turning_point];
        
        nums[turning_point]=nums[close_greater];
        nums[close_greater]=temp;
        sort(nums.begin()+turning_point+1,nums.end());
        
        
        
        return ;
    }
};