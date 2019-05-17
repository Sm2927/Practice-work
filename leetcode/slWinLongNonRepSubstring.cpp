//Sliding window approach- O(n)
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char> st;
        int m = 0,i=0,j=0;
        while(i<n && j<n){
            if(!st.count(s[j])){
                st.insert(s[j++]);
                m = max(m,j-i);
            }
            else{
                st.erase(s[i++]);
            }
        }
        return m;
    }
};
