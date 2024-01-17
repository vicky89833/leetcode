class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedVector;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(mergedVector));
        
        sort(mergedVector.begin(),mergedVector.end());
        
        int n=mergedVector.size(); 
        int middle;
        if(n%2==0){
            middle=n/2;
            return (static_cast<double>(mergedVector[middle - 1]) + static_cast<double>(mergedVector[middle])) / 2.0;
        }
        middle=n/2;
        // std::cout << std::fixed << std::setprecision(5);
        
        return static_cast<double>(mergedVector[middle]);
        
    }
};