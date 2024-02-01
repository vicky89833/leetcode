class Solution {
public:
    int rowfind(vector<vector<int>>& matrix, int target,int begin,int end,int rSize){
        ////binary search in sorted array to find element in matrix[i][0]
        int mid=(end+begin)/2;
        if(matrix[mid][0]<=target&&matrix[mid][rSize-1]>=target){
            return mid;
        }
        if(matrix[begin][0]<=target&&matrix[mid][0]>target){
            return rowfind(matrix,target,begin, mid,rSize);
            
        }
        if(matrix[mid][0]<=target&&matrix[end][rSize-1]>=target){
            return rowfind(matrix,target,mid+1, end,rSize);
        }
        
        
        return -1;
    }
    int colfind(vector<vector<int>>& matrix, int target,int begin,int end,int row ){
        //binary search in sorted array to find element in matrix[i]
        int mid=(end+begin)/2;
        if(matrix[row][mid]==target){
            return mid;
        }
        if(matrix[row][begin]<=target&&matrix[row][mid]>target){
            return colfind(matrix,target,begin, mid,row);
            
        }
        if(matrix[row][mid+1]<=target&&matrix[row][end]>=target){
            return colfind(matrix,target,mid+1, end,row);
        }
        
        
        return -1;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=rowfind(matrix,target,0, m-1,n);
        if(row==-1)return false;
        int col=colfind(matrix,target,0, n-1,row);
        if(col==-1)return false;
        if(matrix[row][col]==target){
            return true;
        }
        return false;
    }
};