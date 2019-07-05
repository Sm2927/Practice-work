//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long unsigned int n,g,p,t,x,y,p1,p2;
    cin>>t;
    while(t--){
        x=y=0;
        cin>>g>>p>>n;
        while(n--){
            cin>>p1>>p2;
            if(p1 == 1){x++;}
            if(p2 == 1){y++;}
        }
        if(g<p){
            cout<< max(x,y)*g + min(x,y)*p<<endl;
        }
        else{
            cout<<max(x,y)*p + min(x,y)*g<<endl;
        }
        
    }
    return 0;
}
Language: C++14
