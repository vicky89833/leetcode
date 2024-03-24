class Solution {
public:
    vector< vector<int> > res;
    
    void comb(vector<int>& candidates,int idx, vector<int> &temp , int target){
        
        if(target ==0){
            res.push_back(temp);
            return ;
        }
        
        if ( idx == candidates.size()) return;
        for(int i= idx ; i < candidates.size() ; i++ ){
            
            if( i != idx && candidates [ i ] == candidates [ i - 1 ] ) continue;
            
            if ( candidates [i] > target ) break ;
            
            temp.push_back( candidates[i] ) ;
            comb(candidates, i + 1 , temp , target - candidates[i] );
            
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort( candidates.begin() , candidates.end() );
        vector<int> temp;
        comb(candidates, 0 , temp , target);
        return res ;
    }
};