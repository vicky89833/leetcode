class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        
        
        for(int i=1;i<n;i++){
            if(leftmax[i-1]>height[i-1]){
                leftmax[i]=leftmax[i-1];
            }
            else{
                leftmax[i]=height[i-1];
            }
            
        }
        
        for(int i=n-2;i>=0;i--){
            if(rightmax[i+1]>height[i+1]){
                rightmax[i]=rightmax[i+1];
            }
            else{
                rightmax[i]=height[i+1];
            }
            
        }
        int result=0;
        
        for(int i=0;i<n;i++){
            if(min(leftmax[i],rightmax[i]) >height[i]){
                result=result + min(leftmax[i],rightmax[i]) -height[i];
            }
            
        }
        
        return result;
        
    }
};