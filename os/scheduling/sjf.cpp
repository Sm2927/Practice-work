#include<bits/stdc++.h>
using namespace std;
 struct Prc{
          int pid;
          int bt;
      };
 bool cmp(Prc a, Prc b){
    return a.bt<b.bt; 
 }     
int main()
{
    int n;
    cin>>n;
    Prc p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].bt;
        p[i].pid = i+1;
    }
    sort(p,p+n,cmp);
    cout<<"the sequence of processes: "<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" ";
    }
    cout<<endl;
    int wt[n],tat[n];
    wt[0] = 0;
    for(int i=1;i<n;i++){
        wt[i] = wt[i-1] + p[i-1].bt;
    }
    for(int i=0;i<n;i++){
        tat[i] = wt[i] + p[i].bt;
    }
    cout<<"Process Waiting-time Turn-around-time"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<"          "<<wt[i]<<"              "<<tat[i]<<endl;
    }
      return 0;
}
