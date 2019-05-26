
//https://leetcode.com/problems/median-of-two-sorted-arrays/solution/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        long int i=0,j=0,k=0;
        vector<int> nums;
        int l1 = nums1.size();
        int l2 = nums2.size();
       while(i<l1 && j<l2){
            if(nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                cout<<nums1[i]<<endl;
               i++;
            }
            else{
                nums.push_back(nums2[j]);
                cout<<nums2[j]<<endl;
                j++;
            }
        }
        while(i<l1){
          nums.push_back(nums1[i]);
               i++;
        }
         while(j<l2){
           nums.push_back(nums2[j]);
                
                j++;
        }
        long int m = l1;
        long int n = l2;
        if( (m+n) % 2 != 0){
            double res = (double)nums[(m+n)/2];
            return res;
        }
        else{
            double res = (double)((double)(nums[(m+n)/2 -1] +nums[(m+n)/2])/(double)2);
            return res;
        }
    }
};
