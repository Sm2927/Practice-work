#include<bits/stdc++.h>
using namespace std;
int main(){
    long unsigned int n;
    scanf("%lu", &n);
    int A[n];
   // printf("%lu",n);
    for (int i=0;i<n;i++){
       scanf("%lu", &A[i]); 
       //B[n-i-1] = A[i];
      
    }
    for (int i=0;i<n;i++){
        printf("%d ",A[n-i-1]);
    }
     
    return 0;
}
