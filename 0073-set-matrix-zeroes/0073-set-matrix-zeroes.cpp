class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<bool>row(n,false);
        vector<bool>col(m,false);
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    if(!row[i])
                        row[i]=true;
                    if(!col[j])
                        col[j]=true;
                  
                }
            }
            
        }
        for(int i=0;i<n;i++){
            if(row[i]){
                for(int j=0;j<m;j++){
                    matrix[i][j]=0;
                }
            }
            
        }
        for(int j=0;j<m;j++){
            if(col[j]){
                for(int i=0;i<n;i++){
                    matrix[i][j]=0;
                }
            }
            
        }
    }
};