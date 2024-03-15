class Solution {
public:
    void subset(vector<int>& nums,int idx,vector< vector<int> > & result, vector<int> temp ){
        result.push_back(temp);
        for(int i=idx;i<nums.size();i++){
            if(i != idx && nums[i-1] == nums [i] ){
                 continue;
            }
            temp.push_back(nums[i]);
            subset( nums , i + 1 , result ,  temp );
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     sort( nums.begin() , nums.end() );
     vector< vector<int> > result; 
     vector<int> temp;  
     
     subset( nums , 0 , result ,  temp );   
        
     return result;   
    }
};