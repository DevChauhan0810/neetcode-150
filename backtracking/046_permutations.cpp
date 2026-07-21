class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res ;
        vector<int> ds ;
        int n = nums.size() ;
        vector<int> freq(n , 0) ;
        permutation(nums , res , ds , freq , n) ;

        return res ;
    }

public:
    void permutation(vector<int>& nums , vector<vector<int>>& res , vector<int>& ds , vector<int>& freq , int n){
        if(n == ds.size()){
            res.push_back(ds) ;
            return ;
        }

        for(int i = 0 ; i < n ; i++){
            if(!freq[i]){
                ds.push_back(nums[i]) ;
                freq[i] = 1 ;
                permutation(nums , res , ds , freq , n) ;
                freq[i] = 0 ;
                ds.pop_back() ;
            }
        }
    }
};