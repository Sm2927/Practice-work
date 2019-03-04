#include<bits/stdc++.h>
using namespace std;
int mini(int a,int b){
    return a<b?a:b;
}

//https://ide.geeksforgeeks.org/RPKFbId0No

int main(){
    int n; //size of the original 
    cin>>n;
    int a[n];
    int s[2*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n,j=0;i<2*n,j<n;i++,j++){
        s[i] = a[j];
    }
    for(int i=n-1;i>=1;i--){
        s[i] = mini(s[2*i],s[2*i + 1]);
    }
    
   int l,r;
   cin>>l>>r;
   l +=n;
   r += n;
   int minm = INT_MAX;
   while(l<r){
      if(l%2 != 0){
          minm = mini(minm,s[l]);
          l += 1;
      } 
      if(r%2 != 0){
          r -= 1;
          minm = mini(minm,s[r]);
          
      } 
      l /= 2;
      r /= 2;
      
   }
   cout<<minm<<endl;
    
    return 0;
}
