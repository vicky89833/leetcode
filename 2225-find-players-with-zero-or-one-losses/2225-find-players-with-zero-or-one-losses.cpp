class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int> losermap;
        
        for(int i=0;i<matches.size();i++){
            
            losermap[matches[i][1]]++;
        }
        
        vector<vector<int>>answer(2);
        for(int i=0;i<matches.size();i++){
            if(losermap.find(matches[i][0])==losermap.end()){
                answer[0].push_back(matches[i][0]);
                losermap[matches[i][0]]=2;
            }
            if(losermap[matches[i][1]]==1){
                answer[1].push_back(matches[i][1]);
                losermap[matches[i][1]]=2;
            }
        }
        
        
        sort(answer[0].begin(),answer[0].end());
        sort(answer[1].begin(),answer[1].end());
        
        return answer;
    }
};