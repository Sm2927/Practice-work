/* a ratio of 1:2:4 is to be maintained between 3 category of fruits. If no such composition found, print 0*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b,c,x;
  cin>>a>>b>>c;
  x=a;
  while(x>0){
  if(b>=2*x && c>=4*x){
  cout<<x + 2*x + 4*x;
  break;
  }
  else if(b<2*x){
  x--;
  continue;
  }
  else if(c<4*x){
  x--;
  continue;
  }
  }
  if(x==0){
  cout<<0;
  }
  return 0;
}
