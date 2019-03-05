//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1


int maxm(int a,int b){
    return a>b?a:b;
    
}
int maxLen(int A[],int n)
{
  //Your code here
  int sum=0;
  int maxLen = 0;
  unordered_map<int, int> scale;
  for(int i=0;i<n;i++){
      sum += A[i];
      
      if(A[i] == 0 && maxLen == 0){
          maxLen = 1;
      }
      if(sum ==0){
          maxLen = i+1;
      }
      auto it = scale.find(sum);
      if(it!=scale.end()){
       
         maxLen= maxm(maxLen,i-scale[sum]);
          
      }
      else{
          scale[sum] = i;
      }
     
  }
  return maxLen;
}
