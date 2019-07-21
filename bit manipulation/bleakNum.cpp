//https://practice.geeksforgeeks.org/problems/bleak-numbers/0/?ref=self

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned int t,n;
	bool f;
	
	cin>>t;
	while(t--){
	    f = false;
	    cin>>n;
	    for(int i=n;i>n/2;i--){
	        /* n/2 coz->
	            for eg: take 8:
	            represented as: 1000 in binary
	            8/2 = 4--> represented as 100
	            that is it needs 3 digits to be represented.
	            when we shift a binary number to the right,
	            it actually gets divided by 2.
	            hence, the answer will definitely lie somewhere
	            above n/2
	        
	        */
	       bitset<16> bset(i);
	       if(i+ bset.count() == n){
	           cout<<"0"<<endl;
	           f=true;
	           break;
	       }

	    }
	    if(!f)
	    {cout<<"1"<<endl;}
	}
	return 0;
}
