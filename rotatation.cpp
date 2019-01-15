#include<bits/stdc++.h>
using namespace std;
int main(){
    long unsigned int n,d;
    scanf("%lu%lu", &n,&d);
    int A[n];
   // printf("%lu",n);
    for (int i=0;i<n;i++){
       scanf("%lu", &A[i]); 
       //B[n-i-1] = A[i];
      
    }
    for (int i=d;i<n;i++){
        printf("%d ",A[i]);
    }
     for (int i=0;i<d;i++){
        printf("%d ",A[i]);
    }
     
    return 0;
}

