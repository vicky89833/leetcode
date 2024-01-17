class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mymap(n);
        // find frequency of each distinct element
        
        
        for(int i=0;i<n;i++){
            mymap[arr[i]]++;
        }
        
        // create set
        set<int>myset;
        for(const auto& pair: mymap ){
            if(myset.find(pair.second)!=myset.end()){
                return false;
            }
            else{
                myset.insert(pair.second);
            }
        }
        return true;
    }
};