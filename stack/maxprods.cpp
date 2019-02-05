








//https://www.interviewbit.com/problems/maxspprod/



int Solution::maxSpecialProduct(vector<int> &A) {
    int n = A.size();
    vector <int> l(n,0);
    vector <int> r(n,0);
    stack<int> ind;
    ind.push(0);
    l[0] = 0;
    for(int i=1;i<n;i++){
        while(!ind.empty()){
            if(A[ind.top()]>A[i]){
                break;
            }
            ind.pop();
        }//stack stores the leftmost element greater than A[i]
        l[i] = (ind.empty())?0:ind.top();
        ind.push(i);
    }
    r[n-1]=0;
    stack<int> indr;
    indr.push(n-1);
    
    for(int i=n-2;i>=0;i--){
        while(!indr.empty()){
            if(A[indr.top()]>A[i]){
                break;
            }
            indr.pop();
        }
        r[i] = (indr.empty())?0:indr.top();
        indr.push(i);
    }
    long long int m = -1;
    for(int i=0;i<n;i++){
       m = max(m, l[i]*1LL*r[i]); 
    }
    return m%1000000007;
}
