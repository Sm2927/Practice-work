// https://leetcode.com/problems/summary-ranges/submissions/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int s = nums.size();
        vector<string> sols;
        if(s == 0){
            return sols;
        }
        int i,j;
        i = j = 0;
        string a,b,c;
        while(j<s){
            // cout<<nums[j]<<"val"<<endl;
            if((j!= s-1) && (nums[j] == nums[j+1] - 1)){j++;} //order of writing conditions in 'if'
            else{
                if(i!=j){
                    a = to_string(nums[i]);
                    b = to_string(nums[j]);
                    c = a+"->"+b;
                    sols.push_back(c);
                    // cout<<c<<endl;
                    j++;
                    
                }
                else{
                    
                    sols.push_back(to_string(nums[i]));
                    // cout<<nums[i]<<endl;
                    j++;
                }
                i = j;
            }
        }
        return sols;
    }
};
