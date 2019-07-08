//https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space/0

#include <bits/stdc++.h>
#define ui unsigned int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ui t,n,i,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    ui a[n][n];
	    for(i=0;i<n;i++){
	        for(j = 0;j<n;j++){
	            cin>>a[i][j];
	        }
	    }
	    for(j =0;j<n;j++){
	        for(int i = n-1;i>=0;i--){
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
