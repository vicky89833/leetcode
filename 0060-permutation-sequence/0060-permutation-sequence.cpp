class Solution {
public:
    int permutation(int n){
        if( n == 0 || n ==1 ){
            return 1;
        }

        return permutation( n-1 ) * n;
        }
    string getPermutation(int n, int k) {
        string  result  ;
        vector < int> temp ;
        for(int i = 1 ; i <= n ; i ++ ){
            
            temp.push_back(i);
            
        }
        
        k=k-1; //for better indexing purpose
        
        while( temp.size() > 0 ){
            
            int permute_k=permutation( temp.size() -1  );
            
            result = result + to_string( temp[ k / permute_k  ] ) ;
            
            temp.erase(temp.begin() + k / permute_k );
            
            k = k % permute_k ;
            
        }
        
        return result;
    }
};