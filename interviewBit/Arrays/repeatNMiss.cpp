
//https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
   long long  n = (long long )(A.size());
   
    //cout<<s<<" "<<s2<<endl;
    long long sp,sp2;
    sp=sp2=0;
    long long t;
    long long s = n*(n+1)/2;
    long long s2 = s*(2*n + 1)/3;
    for(long long i=0;i<n;i++){
        t = A[i];
        sp += t*1LL;
       // sp -= (i+1)*1LL;
        sp2 += t*t*1LL;
        //sp2 -= (i+1)*(i+1)*1LL;
        
    }
    sp2 -= s2;
    sp -= s;
    vector<int> r;
    sp2 /= sp; //now sp2 holds a value that can be passed to int
   int M = (int) ((sp + sp2) / 2);
    int N = sp2 - M;
   
     r.push_back(M);
     
     r.push_back(N);
     
   
   
   
   
   
    return r;
    
    }
    

