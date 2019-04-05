#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    n=5;
    r=3;
    int av[r]={3, 3, 2};
    int work[r] = {3, 3, 2}; 
   // bool f[n]={false};
    int max[n][r]={{7, 5, 3}, 
                     {3, 2, 2}, 
                     {9, 0, 2}, 
                     {2, 2, 2}, 
                     {4, 3, 3}} ;
    int all[n][r] = {{0, 1, 0}, 
                      {2, 0, 0}, 
                      {3, 0, 2}, 
                      {2, 1, 1}, 
                      {0, 0, 2}};
    int need[n][r];
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            need[i][j] = max[i][j] - all[i][j];
        }
        
    }
    
    int f[n]={0};
    int safe[n];
    int cnt=0;
    bool flag;
    while(cnt < n){
        flag = false;
        for(int i=0;i<n;i++){
            if(f[i] == 0){
                int j;
                for(j=0;j<r;j++){
                    if(need[i][j] > work[j])
                        {break;}
                }
                if(j == r){
                    for(int k=0;k<r;k++){
                        work[k] += all[i][k];
                    }
                    safe[cnt++] = i;
                    f[i] = 1;
                    flag = true;
                }
            }
        }
        if(flag == false){
            cout<<"not safe"<<endl;
            return 0;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<safe[i]<<endl;
    }
    
    
    
    
    
    

    return 0;
}
