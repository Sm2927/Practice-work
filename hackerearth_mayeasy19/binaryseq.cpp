//https://www.hackerearth.com/practice/python/getting-started/numbers/practice-problems/algorithm/binary-sequence-dbaf9d61/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long unsigned int t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if(x*y == a+b ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
           
        }
    }
    return 0;
}
