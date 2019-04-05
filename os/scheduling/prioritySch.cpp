#include<bits/stdc++.h>
using namespace std;
struct Prc{
    int pid;
    int bt;
    int pri;
};
bool cmp(Prc a,Prc b){
    return a.pri < b.pri;
}
int main(){
    
        int n;
        cin>>n;
        Prc p[n];
       for(int i=0;i<n;i++){
           cin>>p[i].bt;
           cin>>p[i].pri;
           p[i].pid = i;
       } 
        sort(p,p+n,cmp);
        cout<<"Order of execution :"<<endl;
        for(int i=0;i<n;i++){
            cout<<p[i].pid<<" ";
        }
        cout<<endl;
        int wt[n],tat[n];
        for(int i=1;i<n;i++){
            wt[0] = 0;
            tat[0] = p[0].bt;
            wt[i] = wt[i-1] + p[i-1].bt;
            tat[i] = wt[i] + p[i].bt;
        }
        for(int i=0;i<n;i++){
            cout<<p[i].pid<<"  "<<wt[i]<<"  "<<tat[i]<<endl;
        }
      return 0;
}
