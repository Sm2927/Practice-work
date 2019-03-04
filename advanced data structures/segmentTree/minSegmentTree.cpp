//https://ide.geeksforgeeks.org/ErqaX89xcj
#include<bits/stdc++.h>
using namespace std;
int mini(int a,int b){
    return a<b?a:b;
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
    for(int i=1;i<2*n;i++){
        cout<<s[i]<<" ";
    }
    
    return 0;
}
