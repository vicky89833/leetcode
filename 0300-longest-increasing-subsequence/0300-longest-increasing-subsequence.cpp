
class Solution {
public:
    vector <vector <int > > result ;
    int LIS ( vector<int>& nums , int idx ,int prev ) {
        if ( idx == nums.size() ) {
            return 0 ;
        }
        if(result[ idx ][ prev + 1 ] != -1 ){
            return result[ idx ][ prev + 1 ]  ;
        }
        int len = 0 + LIS ( nums , idx + 1, prev ) ;
        if( prev == -1 || nums [ idx ]  > nums[ prev ] ){
            
            len = max ( 1 + LIS (nums , idx + 1, idx ) , len ) ;
            
        }
        
        return result[ idx ][ prev + 1 ] = len  ;
    }
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size()  ;
       result.assign(n , vector < int > ( n , -1 ) ) ;
       return  LIS(nums , 0 , -1 ) ;
    }
};