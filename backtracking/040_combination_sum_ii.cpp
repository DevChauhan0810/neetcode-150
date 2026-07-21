class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end()) ;
        vector<vector<int>> res ;
        vector<int> ds ;
        combination(0 , candidates , res , ds , target) ;
        return res ;
        
    }

public:
    void combination(int idx , vector<int>& candidates , vector<vector<int>>& res , vector<int>& ds , int target){
        if(target == 0){
            res.push_back(ds) ;
            return ;
        }

        for(int i = idx ; i < candidates.size() ; i++){
            if(i > idx and candidates[i] == candidates[i - 1]) continue ;
            if(candidates[i] > target) break ;
            ds.push_back(candidates[i]) ;
            combination(i + 1 , candidates , res , ds , target - candidates[i]) ;
            ds.pop_back() ;

        }
    }
};
