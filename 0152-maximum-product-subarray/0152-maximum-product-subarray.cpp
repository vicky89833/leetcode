class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
          // 1 20  -3  56 0 32 8 46 0 -74 -74 
         
        int left = nums[0] ;
        int result = nums[0] ;
        int n = nums.size() ;
        
        for ( int i = 1 ; i < n ; i++ ){
            if ( left == 0 ){
                left = 1 ;
            }
            result = max( { result , left*nums[i] , nums[i] } ) ;
            left =  left*nums[i] ;
            
        }
        int result2 = nums[ n - 1 ] ;
        int right = nums[ n - 1 ] ;
        for ( int i = n-2 ; i >= 0 ; i-- ){
            if ( right  == 0 ){
                right = 1 ;
            }
            result2 = max( { result2 , right*nums[i] , nums[i]} ) ;
            right = right*nums[i] ;
            
        }
        
        return max( result , result2 ) ;
    }
};