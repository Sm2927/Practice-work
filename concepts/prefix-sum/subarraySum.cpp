//https://www.geeksforgeeks.org/find-a-subarray-whose-sum-is-divisible-by-size-of-the-array/

#include<bits/stdc++.h>
 using namespace std;
int main(){
    vector<int> a;
    int b,n;
    while(cin>>b){
        a.push_back(b);
    }
    n = a.size();
    int f=0;
    vector<int> prefix(n+1,0);
    for(int i=1;i<n+1;i++){
        prefix[i]= prefix[i-1] + a[i-1];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if((prefix[j]-prefix[i-1])% n == 0){
                cout<<i-1<<" "<<j-1<<endl;
                f=1;
                break;
            }
            if(f==1){break;}
        }
    }
    
    
    return 0;
    
}
