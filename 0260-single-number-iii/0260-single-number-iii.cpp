class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();//n>=2
        
        unsigned int xor_a_b=nums[0];//it will give xor of a and b unique
        
        for(int i=1;i<n;i++){
            xor_a_b=xor_a_b^nums[i];
        }
        
        //Now we find the bit which seperate a and b
        
        if (xor_a_b < 0)
          xor_a_b = ~xor_a_b + 1;
        else
          xor_a_b &= -xor_a_b;
        //now we compare the all  
       int a=0;
       int b=0;
        
        for(int num:nums){
            if((xor_a_b&num)==0){
                a^=num;
            }
            else{
                b^=num;
            }
        }
        
        
        return {a,b};
    }
};