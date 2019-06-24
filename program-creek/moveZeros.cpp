//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int s,i,j;
        s = a.size();
        i=1;
        j=0;
        while(i<s){
            if(a[j] == 0 && a[i] != 0){
                a[i] = a[i] - a[j];
                a[j] = a[i] + a[j];
                a[i] = a[j] - a[i]; //swapping
                j++;
            }
            i++;
        }
        
    }
};
