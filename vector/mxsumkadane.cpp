//https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
int mx(int a,int b){
    return a>b?a:b;
}
int Solution::maxSubArray(const vector<int> &A) {
   int n = A.size();
            int curSum = 0, maxSum = -1000000000;
            for (int i = 0; i < n; i++) {
                curSum += A[i];
                maxSum = max(maxSum, curSum);
                if (curSum < 0) curSum = 0;
            }
            return maxSum;
}
