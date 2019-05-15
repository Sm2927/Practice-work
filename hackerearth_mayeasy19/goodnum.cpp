//https://www.hackerearth.com/problem/algorithm/good-numbers-4-d2497605/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long unsigned int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<< (n/2) - (n/4)<<endl;
    }
    return 0;
}
