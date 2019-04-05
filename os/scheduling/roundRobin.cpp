#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int bt[n];
        int rem[n];
        for(int i=0;i<n;i++){
            cin>>bt[i];
            rem[i] = bt[i];
        }
        int wt[n],tat[n];
        int q;
        cin>>q;
        int t=0;
        
        bool st = true;
        while(1){
            st = true;
            for(int i=0;i<n;i++){
                if(rem[i] > 0){
                    st = false;
                    if(rem[i] > q){
                        t += q;
                        rem[i] -= q;
                    }
                    else{
                        t += rem[i];
                        wt[i] = t - bt[i];
                        rem[i] = 0;
                    }
                }
            }
            if(st == true){
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<wt[i]<<endl;
        }
        
      return 0;
}
