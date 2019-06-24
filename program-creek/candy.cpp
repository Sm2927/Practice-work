// https://leetcode.com/problems/candy/
//check program creek for another approach

class Solution {
public:
    int candy(vector<int>& a) {
        int s = a.size();
        int c = s;
        int p,n;
        int i = 0;
        while(i<s){
            p=n=0;
            if(i != 0 && a[i] > a[i-1]){
                p = 1;
            }
            if(i != s-1 && a[i] > a[i+1]){
                n = 1;
            }
            if(p+n > 0){c++;}
            i++;
        }
        return c;
    }
};
