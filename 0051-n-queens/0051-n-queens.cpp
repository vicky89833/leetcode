class Solution {
public:
    vector< vector < string >> res; 
    bool can_fill( vector < string > & ans ,int row  , int col ){
        
        
        int k= row ;
        int j= col;
        
        while( row >= 0 && col >= 0){
            if ( ans [row][ col ] == 'Q') return false;
            row--;
        }
        
        row = k ;
        while( row >=0 && col >= 0 ){
            
            if( ans [ row ][ col ] == 'Q' ) return false ;
            row--;
            col--;
            
        }
        
        row = k ;
        col = j ;
        
        while( row >=0 && col <  ans.size() ){
            
            if( ans [ row ][ col ] == 'Q' ) return false ;
            row--;
            col++;
            
        }
        
        
        
        return true ;
        
    }
    void fill_queens( vector < string > & ans , int row   ){
        
        if ( row == ans.size() ){
            
            res.push_back(ans);
            return ;
        }
        
        for( int col = 0 ; col < ans.size() ; col++ ){
            
            if( ans[ row ][ col ] == '.'  &&  can_fill(ans , row , col )  ){
                
                ans [ row ][ col ] =  'Q'   ;
                fill_queens(  ans ,  row + 1  ) ;
                ans [ row ][ col ] =  '.'   ;
                
            }
            
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector< string > ans ;
        
        for(int i = 0 ; i < n ; i ++ ){
            string s( n , '.');
            ans.push_back( s ) ;
        }
        
        
        
        fill_queens(ans,0 );
        
        return res;
    }
};