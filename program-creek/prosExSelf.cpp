//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> left(s); //for calculatingproduct of elements before it
        vector<int> right(s);//for calculatingproduct of elements after it
        vector<int> sols(s);
        left[0] = right[s-1] = 1;
        for(int i=1;i<s;i++){
            left[i] = left[i-1] * nums[i-1];
        }
        for(int i=s-2;i>=0;i--){
            right[i] = right[i+1] * nums[i+1];
            sols[i] = right[i] * left[i];
        }
        return sols;
        
    }
};
