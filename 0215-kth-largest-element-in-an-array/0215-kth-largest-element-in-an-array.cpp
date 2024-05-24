class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue< int , vector<int> , greater<int> > pq;
        
        int n = nums.size() ;
        for( int idx = 0 ; idx < n ; idx++ ){
            
            pq.push( nums[idx ] );
            
            if( pq.size() > k ){
                pq.pop();
            }
        }
        
        return pq.top();
    }
};