

//https://www.lintcode.com/problem/missing-ranges/description

class Solution {
public:
    /*
     * @param nums: a sorted integer array
     * @param lower: An integer
     * @param upper: An integer
     * @return: a list of its missing ranges
     */
     string getStrRange(int a, int b){
         return a==b?to_string(a):to_string(a)+"->"+to_string(b);
     }
    vector<string> findMissingRanges(vector<int> &nums, int lower, int upper) {
        // write your code here
        int s,i=0;
        s = nums.size();
        vector<string> sols;
        if(s==0){
             sols.push_back(getStrRange(lower,upper));
             return sols;
        }
        if(lower == INT_MAX){
            return sols;
        }
        while(i<s){
            if(i<s-1 && nums[i] == nums[i+1]){
                i++;
                continue;
            }
            if(nums[i] == lower){
                i++;
                lower++;
                //2147483647
            } else{
               // cout<<"lower  = "<<lower<<endl;
                sols.push_back(getStrRange(lower,nums[i]-1));
                if(nums[i]==INT_MAX){ return sols; }
                
                lower = nums[i]+1;
                
                
                i++;
                
            }
            
        }
        if(lower<=upper){
            sols.push_back(getStrRange(lower,upper));
        }
        return sols;
    }
};
