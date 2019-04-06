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
        int sum = 0;
        int st[n]={0};
       bool check = true;
      
        while(true){
            sum = 0;
            for(int i=0;i<n;i++){
                if(rem[i] > 0){
                    if(rem[i] > q){
                        t += q;
                        rem[i] -= q;
                       // if(i == n-1){cout<<rem[i]<<endl;}
                    }
                    else{
                        t += rem[i];
                        rem[i] = 0;
                        st[i] = 1;
                        wt[i] = t - bt[i];
                        //if(i == n-1){cout<<rem[i]<<endl;}
                    }
                }
            }
             
           
            for(int i=0;i<n;i++){
                sum += st[i];
               // cout<<rem[i]<<endl;
            }
            //cout<<endl<<endl;
           // cout<<sum<<endl;
            if(sum == n){
               // check =false;
                break;
            }
        }
        
        
        
        
               for(int i=0;i<n;i++){
            cout<<wt[i]<<endl;
        }
        
      return 0;
}
