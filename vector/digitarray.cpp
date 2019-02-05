//https://www.interviewbit.com/problems/add-one-to-number/
vector<int> Solution::plusOne(vector<int> &A) {
   
    vector<int> B;
    int n = A.size();
    
    int carry = 1,sp,add;
    for(int i=n-1;i>=0;i--){
        sp = A[i] + carry;
        add = sp%10;
        B.push_back(add);
        carry = sp/10;
            }
    if(carry != 0){
      B.push_back(carry);
        }
     while(B[B.size() -1 ] == 0 && B.size() > 1){
        B.pop_back();
    }
    reverse(B.begin(),B.end());
   
        
        
     return B;
    
}
