class Solution {
public:
    void f( vector<int>& coins, int amount  , int idx , int &result , int &temp ,vector< vector < int > > &dp ){
        
        if( amount == 0 ){
            result = min( temp , result );
            return  ;
        }
        if( idx == coins.size() - 1 ){
            
            if( amount % coins[ idx ] != 0 ){
                return  ;
            }
            
            result = min( result , temp + amount / coins[ idx ]) ;
             return ;
        }
        if( dp[idx][amount] != -1 ){
            if( dp[idx][amount] <= temp )
            
            return ;
        }
         dp[idx][amount] = temp ;
        f( coins , amount  , idx + 1 , result , temp , dp );
        
        // int take =0 ;
        if( coins[ idx ] <= amount ){
            temp = temp + 1 ;
            f( coins , amount - coins[ idx ] , idx  , result , temp ,dp  );
            temp = temp -1 ;
        }
        
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int result = INT_MAX ;
        int temp = 0 ;
        vector< vector < int > > dp ( coins.size()  , vector<int> ( amount + 1 , -1 )) ;
        f( coins , amount  , 0  , result , temp , dp) ;
        if( result == INT_MAX ){
            return -1 ;
        }
        
        return result ;
    }
};