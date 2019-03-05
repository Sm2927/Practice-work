#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],l[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        l[i]=1;
	    }
	    int i,j;
	    for(i=1;i<n;i++){
	        for(j=0;j<i;j++){
	            if(a[i]>a[j] && l[i]<l[j]+1){
	                l[i] = l[j]+1;
	            }
	        }
	    }
	    int m = *max_element(l,l+n);
	    cout<<m<<endl;
	}
	return 0;
}
