//https://practice.geeksforgeeks.org/problems/element-appearing-once/0

//the sorting appraoch (nlogn)
//for O(n) - using bit algo: https://www.geeksforgeeks.org/find-the-element-that-appears-once/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    i=0;
	    while(i<n){
	        if(a[i] == a[i+1]){
	            i += 2;
	        }
	        else if(i==n-1 || a[i] != a[i+1]){
	            cout<<a[i]<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
