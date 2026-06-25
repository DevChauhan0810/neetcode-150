class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> ans ;

        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > 0) break ; // if first ele is non-zero just return empty array
            if(i > 0 and nums[i] == nums[i - 1]) continue ; // eliminating duplicates for outer loop

            int l = i + 1 , r = n - 1 ;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r] ;
                if(sum > 0) r-- ;
                else if(sum < 0) l++ ;
                else{
                    ans.push_back({nums[i] , nums[l] , nums[r]}) ;
                    l++ ;
                    r-- ;
                    // now eliminating the inner loop duplicates 
                    while(l < r and nums[l] == nums[l - 1]) l++ ;
                }
            }
        }
        return ans ;
    }
};
