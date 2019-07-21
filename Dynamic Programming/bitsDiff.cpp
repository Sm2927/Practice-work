//https://practice.geeksforgeeks.org/problems/find-sum-of-different-corresponding-bits-for-all-pairs/0

#include <bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,i,j,a[100005],ans,m=1000000007;
cin>>t;
while(t--)
{
cin>>n;

long long dp[32]={0}; //bit constraint = 32 bits max

for(i=1;i<=n;i++)
{
cin>>a[i];
}
for(i=1;i<=n;i++)
    {
      for(j=0;j<32;j++)
        {
            if((1<<j)&a[i])
               dp[j]++;
        }  
    }

// for(int i=0;i<32;i++){cout<<dp[i]<<endl;}
ans=0;
for(i=0;i<32;i++)
{
    
ans = (ans%m +(dp[i]*(n-dp[i])%m))%m;
}

cout<<(ans*2)%m<<endl;
}
return 0; }
