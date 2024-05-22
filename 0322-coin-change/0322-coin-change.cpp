class Solution {
public:
    int f( vector<int>& coins, int amount  , int idx  ,vector< vector < int > > &dp ){
        
        if( amount == 0 ){
            
            return 0 ;
        }
        
        if( idx == coins.size() - 1 ){
            
            if( amount % coins[ idx ] != 0 ){
                return INT_MAX  ;
            }
            return amount / coins[ idx ] ;
        }
        
        if( dp[idx][amount] != -1 ){
           
            return dp[idx][amount] ;
        }
         
        int not_take =  f( coins , amount  , idx + 1 ,  dp );
        
        int take = INT_MAX ;
        if( coins[ idx ] <= amount ){
            int l = f( coins , amount - coins[ idx ] , idx , dp  ) ;
            if( l ==INT_MAX  ){
                l= INT_MAX -1 ;
            }
            take = 1 + l ;
           
        }
        
       return dp[idx][amount] = min ( take  , not_take ) ; 
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector< vector < int > > dp ( coins.size()  , vector<int> ( amount + 1 , -1 )) ;
        int result = f( coins , amount  , 0  ,  dp) ;
        if( result == INT_MAX){
            return -1 ;
        }
        
        return result ;
    }
};