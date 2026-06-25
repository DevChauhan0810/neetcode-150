class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nset(nums.begin() , nums.end()) ;
        int cnt = 0 ;
        for(int x : nset){
            if(nset.find(x - 1) == nset.end()){
                int l = 1 ;
                while(nset.find(x + l) != nset.end()){
                    l++ ;
                }
                cnt = max(cnt , l) ;
            }
        }
        return cnt ;
        
    }
};
