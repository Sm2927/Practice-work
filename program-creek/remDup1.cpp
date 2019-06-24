//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if(s<2){
            return s;
        }
        int i,j;
        i=1;
        j=0;
        
        while(i<s){
            if(nums[i] != nums[j])  {
                // 2 pointer approach to maintain constant space and linear time
                j++;
                nums[j] = nums[i];
            }
            i++;
        }
        return j+1;
    }
};
