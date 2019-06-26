//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    int candy(vector<int>& a) {
        int s = a.size();
        vector<int> scan(s,1);
        for(int i=1;i<s;i++){
            if(a[i] > a[i-1]){scan[i] = scan[i-1]+1;}
        }
        for(int i = s-2;i>=0;i--){
            if(a[i] > a[i+1]){
                if(scan[i]<=scan[i+1]){scan[i] = scan[i+1]+1;}
            }
        }
        return accumulate(scan.begin(),scan.end(),0);
    }
};
