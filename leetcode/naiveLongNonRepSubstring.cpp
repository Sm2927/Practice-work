//complexity O(n^3)

bool all(string s,int beg,int end){
    unordered_set<char> st ;
    for(int i=beg;i<end;i++){
        char c = s[i];
        if(st.find(c) != st.end()){
            return false;
        }
        st.insert(c);
    }
    return true;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int m = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(all(s,i,j)){
                    m = max(m,j-i);
                }
            }
        }
        return m;
    }
};

