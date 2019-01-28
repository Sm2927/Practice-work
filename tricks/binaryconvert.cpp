#include <iostream>
using namespace std;
void br(int n){
if(n>1){
  br(n>>1);
}
cout<< (n&1);
}
int main(){
int n;
cin>>n;
br(n);
return 0;
}
