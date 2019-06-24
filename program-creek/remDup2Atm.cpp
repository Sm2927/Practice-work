//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if(s<=2){
            return s;
        }
        int i,j;
        i=2;
        j=1;
        while(i<s){
            if(nums[j] == nums[i] && nums[i] == nums[j-1]){
                i++;
            }
            else{
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        return j+1;
    }
};
