class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size() ;
        map<int , int> mp ;
        for(auto x : nums) mp[x]++ ;

        vector<pair<int , int>> v ;
        for(const auto& x : mp){
            v.push_back({x.second , x.first}) ;
        }
        sort(v.rbegin() , v.rend()) ;

        vector<int> v1 ;
        for(int i = 0 ; i < k ; i++){
            v1.push_back(v[i].second) ;
        }
        return v1 ;
    }
};
