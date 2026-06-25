class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 , r = s.length() - 1 ;
        while(l < r){
            while(l < r and !isAlphaNum(s[l])) l++ ;
            while(l < r and !isAlphaNum(s[r])) r-- ;
            if(tolower(s[l]) != tolower(s[r])) return false ;
            l++ ;
            r-- ;
        }
        return true ;
    }
    bool isAlphaNum(char c){
            return ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z') or (c >= '0' and c <= '9')) ;
        }
};
