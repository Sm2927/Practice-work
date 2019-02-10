#include<bits/stdc++.h>
using namespace std;
int actSel(vector<pair<int,int>> &jobs, int n){
    vector <int> L(n);
    for(int i=0;i<n;i++){
        for(int j =0;j<i;j++){
            if(jobs[j].second < jobs[i].first && L[i]<L[j]){
                L[i]=L[j];
            }
            
        }
         L[i]++;
        // cout<<L[i]<<" ";
    }
    return *max_element(L.begin(), L.end());
}
int main(){
    vector<pair<int,int>> j;
    int a,b,n,t;
    cout<<"enter the number of activities"<<endl;
    cin>>n;
    t=n;
    cout<<"enter the start and the end time of activities"<<endl;
    while(t--){
        cin>>a>>b;
        j.push_back(make_pair(a,b));
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<j[i].first<<" "<<j[i].second<<endl;
    // }
    //sort the vector of pairs according to the start time of the jobs
    sort(j.begin(), j.end());
    // for(int i=0;i<n;i++){
    //     cout<<j[i].first<<" "<<j[i].second<<endl;
    // }
     //send sorted vector to function
     int r = actSel(j, n);
     cout<<"the maximum number of activities that can be completed ";
     cout<<r<<endl;
    return 0;
    
}
