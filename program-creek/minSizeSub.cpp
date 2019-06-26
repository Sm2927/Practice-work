// https://leetcode.com/problems/minimum-size-subarray-sum/submissions/

class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int s = nums.size();
        if(s == 0){
            return 0;
        }
        int minl = INT_MAX;
        int i,j,sum,f;
        i=j=f=0;
        sum = nums[0];
        while(j<s){
           
            
            if(sum < k){
                j++;
                if(j>=s){break;}
                sum += nums[j];
            }
            if(sum >= k){
                
                minl = min(minl, j-i+1);
                // cout<<minl<<endl;
                f=1;
                sum -= nums[i++];
            }
        }
        if(f == 0){return 0;}
        return minl;
    }
};
