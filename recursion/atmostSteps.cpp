//https://www.techiedelight.com/find-total-ways-reach-nth-stair-with-atmost-m-steps/
#include <bits/stdc++.h>
using namespace std;

int atmostWays(int n, int m){
    if(n<0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int cnt = 0;
    for(int i=1;i<=m;i++){
        cnt += atmostWays(n-i, m);
    }
    return cnt;
}
int main(){
    int n,m;
    cout<<"enter the number of stairs"<<endl;
    cin>>n;
    cout<<"enter the atmost number of steps"<<endl;
    cin>>m;
   
    int c = atmostWays(n,m);
    cout<<c<<endl;
    return 0;
}
