class Solution {
public:
    int findPivote(vector<int>&nums,int n){
        int l=0,r=n-1;
        
        while(l<r){
            int mid=(l+r)/2;
            
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return r;
    }
    int bst(vector<int>& nums, int target,int l,int r){
        int idx=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        
        int pivote=findPivote(nums,n);
        int idx=bst(nums,target,0,pivote-1);
        if(idx!=-1){
            return idx;
        }
        idx=bst(nums,target,pivote,n-1);
        return idx;
    }
};