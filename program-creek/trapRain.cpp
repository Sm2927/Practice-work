//https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        vector<int> left(s,0);
        vector<int> right(s,0);
        int ml,mr;
        left[0] = ml = height[0];
        right[s-1] = mr = height[s-1];
        int sol = 0;
        
        for(int i=1;i<0;i++){
            if(height[i] > ml){
                ml = height[i];
                left[i] = height[i];
            }
            else{
                left[i] = left[i-1];
            }
        }
        
        for(int i=s-2;i>=0;i--){
            if(height[i] > mr){
                mr = height[i];
                left[i] = height[i];
            }
            else{
                left[i] = left[i+1];
            }
        }
        
        for(int i=0;i<s;i++){
            sol += (min(left[i], right[i]) - height[i]);
        }
        
        
        
        return sol;
        
    }
};
