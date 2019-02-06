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
//hint for solving without using extra memory
/*
m(Actual) = Sum(1...N) + A - B

    Sum(Actual) - Sum(1...N) = A - B. 

    Sum(Actual Squares) = Sum(1^2 ... N^2) + A^2 - B^2

    Sum(Actual Squares) - Sum(1^2 ... N^2) = (A - B)(A + B) 

    = (Sum(Actual) - Sum(1...N)) ( A + B). 
We can use the above 2 equations to get the value of A and B.
*/
