//https://www.interviewbit.com/problems/repeat-and-missing-number-array/
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size(),p=0;
    int s = (n*(n+1))/2;
    set<int> st; 
   
     
    pair< set<int>::iterator,bool> ptr; 
     vector<int> r;
    for(int i=0;i<n;i++){
        ptr = st.insert(A[i]); //check
        if(!ptr.second){
            r.push_back(A[i]);
        }
        else{
           p += A[i]; 
        
        }
    }
     
   
   
    r.push_back(s-p);
   
   
    return r;
    
}
