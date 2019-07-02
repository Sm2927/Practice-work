//https://leetcode.com/problems/bitwise-and-of-numbers-range/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m == n){
            return m;
        }
      long long int res = m*1L;
        
        for(long long int i=m+1;i<=n;i++){
            res &= i;
            if (res == 0){
                return 0;
            }
        }
        return res;
    }
};
