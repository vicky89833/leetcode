class Solution {
public:
    bool f( vector<int>& nums , int idx , int target ,  vector< vector < int > > & dp ){
        
        if( target == 0 ){
            return true;
        }
        if( idx == nums.size() -1 ){
            
            return nums[ idx ] == target ;
        }
        
        if( dp[ idx ][ target ] != -1 ){
            return dp[idx][target] ;
        }
        bool not_take = f( nums , idx +1 , target , dp ) ;
        
        bool take = false ;
        if( nums [ idx ] <= target ){
            take = f( nums , idx +1 , target - nums[ idx ] , dp ) ;
        }
        
        return dp[ idx ] [ target ] = ( take || not_take ) ;
        
    }
    bool canPartition(vector<int>& nums) {
        
        // we need to find target 
        
        int sum = accumulate( nums.begin(), nums.end(), 0 ) ;
        
        if (sum %2 == 1 ){
            return  false ;
        }
        
        int target = sum/2 ;
        
        // write  dp to find subset 
        
        vector< vector < int > > dp ( nums.size() , vector < int > ( target +1 , -1 )  ) ;
        
        return f(nums , 0 , target  , dp);
        
        
//         // base cases 
//         for ( int i = 0 ; i < nums.size() ){
//             dp[i][0] = 1 ;
//         }
//         if( nums.size( )-1 <= target ){
//             dp[ nums.size( )-1][ nums.size( )-1 ] = 1 ;
//         }
        
        
//         for( int i = 0 ; i < nums.size() ; i++  ){
//             for( int j = i ; j <= tagets , j++  ){
                
//             }
//         }
        
    }
};