//https://practice.geeksforgeeks.org/problems/check-if-a-number-is-power-of-another-number/0/?ref=self
#include <bits/stdc++.h>
#define lu long unsigned int
using namespace std;

int main() {
	//code
	lu t;
	double x,y,res;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    res = log(y)/log(x);
	   // cout<<ceil(res)<<endl;
	    if(res == (int)res){cout<<"1"<<endl;}
	    else{cout<<"0"<<endl;}
	}
	return 0;
}
