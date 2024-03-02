class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> result;
        if(n==0){
            
            return result;
        }
        result.push_back(pref[0]);
        
        for(int i=1;i<n;i++){
            int idx=pref[i-1]^pref[i];
            result.push_back(idx);
        }
        
        return result;
        
    }
};