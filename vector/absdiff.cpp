//https://www.interviewbit.com/problems/maximum-absolute-difference/
//useful code to learn the dynamics of modulus
int mx(int a,int b){
    return a>b?a:b;
}
int mn(int a,int b){
    return a<b?a:b;
}
int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    if(n==1){
        return 0;
    }
    int maxminus, maxplus, minplus, minminus;
    maxplus = maxminus = INT_MIN;
    minplus = minminus = INT_MAX;
    vector<int> minus(n,0);
    vector<int> plus(n,0);
    for(int i=0;i<n;i++){
        minus[i] = A[i] - i;
        maxminus = mx(maxminus, minus[i]);
        minminus = mn(minminus, minus[i]);
        plus[i] = A[i] +i;
        maxplus = mx(maxplus, plus[i]);
        minplus = mn(minplus, plus[i]);
    }
    
    return mx((maxplus - minplus),(maxminus - minminus));
}
/*f(i, j) = |A[i] - A[j]| + |i - j| can be written in 4 ways (Since we are looking at max value, we don’t even care if the value becomes negative as long as we are also covering the max value in some way).

(A[i] + i) - (A[j] + j)
-(A[i] - i) + (A[j] - j) 
(A[i] - i) - (A[j] - j) 
(-A[i] - i) + (A[j] + j) = -(A[i] + i) + (A[j] + j)
Note that case 1 and 4 are equivalent and so are case 2 and 3.

We can construct two arrays with values: A[i] + i and A[i] - i. Then, for above 2 cases, we find the maximum value possible. For that, we just have to store minimum and maximum values of expressions A[i] + i and A[i] - i for all i.*/
