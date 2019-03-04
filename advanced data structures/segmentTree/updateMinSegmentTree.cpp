//https://ide.geeksforgeeks.org/V4R6tsyJzq
#include<bits/stdc++.h>
using namespace std;
int mini(int a,int b){
    return a<b?a:b;
}
void disp(int n,int s[]){
    for(int i=1;i<2*n;i++){
        cout<<s[i]<<" ";
    }
}
void update(int n,int s[],int idx,int idxval){
   //update value at a particular index to a particular value
   
    idx += n;
    s[idx] = idxval;
    while(idx > 1){
        
        idx /= 2;
        s[idx] = mini(s[2*idx], s[2*idx + 1]);
        
    } 
}
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
    disp(n,s);
    cout<<endl;
     int idx,idxval;
    cin>>idx>>idxval;
    update(n,s,idx,idxval);
    
   disp(n,s);
    
    return 0;
}
