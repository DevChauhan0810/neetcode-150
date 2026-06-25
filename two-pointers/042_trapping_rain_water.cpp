class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() ;
        if (n == 0) return 0 ;

        vector<int> mL(n) , mR(n) ;
        mL[0] = height[0] ;
        for (int i = 1 ; i < n ; i++) {
            mL[i] = max(mL[i - 1] , height[i]) ;
        }

        reverse(height.begin() , height.end());
        mR[0] = height[0] ;
        for (int i = 1 ; i < n ; i++) {
            mR[i] = max(mR[i - 1] , height[i]) ;
        }
        reverse(mR.begin() , mR.end()) ;

        int cnt = 0 ;
        for (int i = 0 ; i < n ; i++) {
            cnt += min(mL[i], mR[i]) - height[i] ;
        }

        return cnt ;
    }
};
