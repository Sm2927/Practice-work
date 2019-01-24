//https://www.hackerrank.com/challenges/ctci-ice-cream-parlor/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=search

//this approach works without having to sort the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long unsigned int money,n,i;
        long int p;
        scanf("%lu%lu",&money,&n);
        long int a[n];
        for(i=0;i<n;i++){
             scanf("%ld",&a[i]);
             
        }
        unordered_map<long int,int> frend;
        long int x;
        for(i=0;i<n;i++){
            x=money-a[i];
            if(frend.count(x)){
                    cout<<frend[x]+1<<" "<<i+1<<endl;
            }
            else{
                frend[a[i]]=i;
            }
        }
        
    }
    return 0;
}


