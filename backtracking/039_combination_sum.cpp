class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res ;
        vector<int> ds ;
        int n = nums.size() ;
        combination(0 , nums , target , res , ds , n) ;
        return res ;
        
    }

public:
    void combination(int idx , vector<int>& nums , int target , vector<vector<int>>& res , vector<int>& ds , int n){
        if(idx == n){
            if(target == 0){
                res.push_back(ds) ;
            }
            return ;
        }

        if(nums[idx] <= target){
            ds.push_back(nums[idx]) ;
            combination(idx , nums , target - nums[idx] , res , ds , n) ;
            ds.pop_back() ;
        }
        combination(idx + 1 , nums , target , res , ds , n) ;
    }
};
