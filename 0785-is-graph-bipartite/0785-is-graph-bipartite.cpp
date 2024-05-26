class Solution {
public:
    bool f( vector<vector<int>>& graph , int idx ,vector<int>& color ){
    
        
        bool ans = true ;    
        for( int i : graph[ idx ] ){
            if(color[ i ] == color[ idx ] ){
                return ans= ans && false ;
            }
            if( color[i] == -1 ){
                color[i] = !color[idx] ;
                ans = ans && f( graph , i , color ) ;
            }
            
        } 
        
        return ans ;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size() ;
        
        vector<int> color( n , -1 );  //-1 not visites , 0 and 1 colour 
        bool ans = true ;
        for( int i = 0 ; i < n ;i++ ){
            
            if( color[i] == -1 ){
                color[i]=1;
                ans = ans && f( graph , i , color );
            }
        }
        
        return ans ;
    }
};