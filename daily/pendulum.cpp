
//https://practice.geeksforgeeks.org/problems/print-an-array-in-pendulum-arrangement/0/?ref=self#ExpectOP

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,lcnt,rcnt,holder;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int newa[n];
	    lcnt=rcnt=1;
	    if(n%2 == 0){
	        holder = (n-1)/2;
	        newa[holder] =a[0];
	        
	    }
	    else{
	        holder = n/2;
	        newa[holder]=a[0];
	    }
	    for(int i=1;i<n;i++){
	            if(i%2 == 0){
	               newa[holder-lcnt] = a[i];
	               lcnt++;
	            }
	            else{
	                newa[holder+rcnt] = a[i];
	                rcnt++;
	            }
	        }
	        for(int i=0;i<n;i++){
	            cout<<newa[i]<<" ";
	        }
	        cout<<endl;
	            
	}
	return 0;
}
