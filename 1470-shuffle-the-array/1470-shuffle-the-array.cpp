class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> even_temp_storage(n);
        vector<int> odd_temp_storage(n);
        for(int i=0;i<n*2;i++){
            if(i<n){
                even_temp_storage[i]=nums[i];
            }
            else{
                 odd_temp_storage[i-n]=nums[i];
            }
        }
         for(int i=0;i<n*2;i++){
            if(i%2==0){
                nums[i]=even_temp_storage[i/2];
            }
             else{
                 nums[i]=odd_temp_storage[i/2];
             }
        }
        return  nums;
    }
};