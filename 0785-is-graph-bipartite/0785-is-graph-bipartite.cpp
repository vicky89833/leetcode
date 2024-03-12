class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int> &coloured,int i,int colour){
        
        coloured[i]=colour;
        
        bool check=true;
        
        for(int j : graph[i]){
            if(coloured[j]==coloured[i]){
                check=false;
                return check;
            }
            else if (coloured[j] == -1){
                check &= dfs(graph,coloured,j,!colour);
                
            }
        }
        return check;
    } 
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int> coloured(n,-1);
        bool result=true;
        for(int i=0;i<n;i++){
            if(coloured[i]==-1){
                result &=dfs(graph,coloured,i,0);
            }
        }
        return result;
    }
};