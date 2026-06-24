class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false ;
        map<char , int> mp , mp1 ;
        for(auto x : s) mp[x]++ ;
        for(auto x : t) mp1[x]++ ;
        return mp == mp1 ;
        
    }
};