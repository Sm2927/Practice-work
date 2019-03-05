//https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0

#include <iostream>
using namespace std;

int main() {
	//code


	int t,imp,i,j,g,cnt,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int newa[n];
	    g = n/k;
	    for(imp = 0;imp< k*g; imp += k){
	        for(i=0,j=k-1;i<k,j>=0;i++,j--){
	            newa[j+imp] = a[i+imp];
	        }
	    }
	   //cout<<j<<endl;
	   int now = g*k;
	   cnt = n-1;
	   while(cnt>=g*k){
	       newa[now++] = a[cnt--];
	   }
	   
	    for(int i=0;i<n;i++){
	        cout<<newa[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
