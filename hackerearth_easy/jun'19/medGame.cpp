//https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/median-game-june-easy-19-3722be60/description/
#include<bits/stdc++.h>
using namespace std;
using lui = long unsigned int;
// #define for(i,n) for(int i=0;i<n;i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lui t,n,x;
    
    cin>>t;
    while(t--){
        vector<lui> s;
        cin>>n;
        while(n--){
            cin>>x;
           s.push_back(x); 
        //   cout<<x<<" ";
        }
        cout<<*min_element(s.begin(),s.end()) + *max_element(s.begin(),s.end())<<endl;
    }
    return 0;
}
