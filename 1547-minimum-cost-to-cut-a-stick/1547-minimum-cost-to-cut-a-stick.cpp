class Solution {
public:
    int f ( vector<int>& cuts , int start , int end , vector< vector < int > >  &dp){
        
        if( start > end ){
            return 0;
        }
       
        
        if( dp[start][end] != -1 ){
            return dp[start][end] ;
        }
         int mini = INT_MAX ;
        for ( int idx = start ; idx <= end ; idx ++ ){
            
            int cost = cuts[ end + 1 ] - cuts [ start - 1]  + f( cuts , start  , idx - 1  , dp) + f ( cuts  , idx + 1 , end , dp ) ;
            
            mini = min ( mini , cost );
        }
        
        return dp[ start ][ end ] = mini ;
    }
    int minCost(int n, vector<int>& cuts) {
        
        cuts.push_back(n) ;
        cuts.insert(cuts.begin(), 0);
        sort( cuts.begin() , cuts.end() ) ;
        
        int m = cuts.size() ;
        
        vector< vector < int > >  dp ( m , vector < int> ( m  , -1 ) ) ;
        return f ( cuts , 1 , m-2 , dp  );
    }
};

// class Solution {
// public:
//     int f(vector<int>& cuts, int start, int end, vector<vector<int>>& dp) {
//         if (start > end) {
//             return 0;
//         }
        
//         if (dp[start][end] != -1) {
//             return dp[start][end];
//         }
        
//         int mini = INT_MAX;
        
//         for (int idx = start; idx <= end; idx++) {
//             int cost = cuts[end + 1] - cuts[start - 1] + f(cuts, start, idx - 1, dp) + f(cuts, idx + 1, end, dp);
//             mini = min(mini, cost);
//         }
        
//         return dp[start][end] = mini;
//     }

    
// };
