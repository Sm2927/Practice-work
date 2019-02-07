//https://www.interviewbit.com/problems/prime-sum/
bool isPrime(int n){
    if(n < 2){
        return false;
    }
    int y =sqrt(n);
    for(int i=2;i<=y;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
vector<int> Solution::primesum(int A) {
  vector <int> s;
  for(int i=0;i<A;i++){
      if(isPrime(i)){
          if(isPrime(A-i)){
              s.push_back(i);
              s.push_back(A-i);
              break;
          }
      }
  }
  return s;
}
