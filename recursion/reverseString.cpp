//https://leetcode.com/explore/learn/card/recursion-i/250/principle-of-recursion/1440/
class Solution {
public:
    void exc(vector<char>& s,int l, int r){
        if(l == r || l>r){
            return;
        }
        char p = s[l];
        s[l] = s[r];
        s[r] = p;
        exc(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        exc(s,left,right);
    }
};
