//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> left(s); //for calculatingproduct of elements before it
        vector<int> right(s);//for calculatingproduct of elements after it
        vector<int> sols(s);
        left[0] = right[s-1] = 1;
        for(int i=0;i<s-1;i++){
            left[i+1] = left[i] * nums[i];
        }
        for(int i=s-1;i>0;i--){
            right[i-1] = right[i] * nums[i];
            
        }
        for(int i =0;i<s;i++){
            sols[i] = right[i] * left[i];
        }
        return sols;
        
    }
};
