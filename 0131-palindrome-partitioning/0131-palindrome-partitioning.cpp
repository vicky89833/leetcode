class Solution {
public:
    
    bool ispalindromic(string s,int start,int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    
    
    void p_partition(string &s,int idx, vector<string> &temp , vector<vector<string>> &result ){
        if( idx == s.size() ){
               result.push_back(temp);
            return ;
        }
        //partition of string in all possible substring (Loop) 
        
        for(int i = idx ; i < s.size() ; i++ ){
            if(ispalindromic( s,idx,i)){
                temp.push_back(s.substr( idx , i-idx +1 ));
                p_partition( s , i+1 , temp , result );
                temp.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>temp;
        p_partition(s,0,temp,result);
        return result;
    }
};