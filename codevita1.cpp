//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string a;
  long long int b,x,p,diff,f=0;
  cin>>a>>b;
 // diff = INT_MAX;
  sort(a.begin(),a.end());
  p=stoi(a);
  if(p-b>0){f=1;diff = p-b;x=p;}
  while(next_permutation(a.begin(), a.end())){
    p = stoi(a);
    if(p-b >0 && p-b<diff){f=1;diff = p-b; x=p;}
  }
  if(f == 0){cout<<"-1"<<endl;}
  else{
    cout<<x<<endl;
  }
  return 0;
}
