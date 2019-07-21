//https://practice.geeksforgeeks.org/problems/number-of-open-doors/0/?ref=self
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	long unsigned t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    /* the open doors will be operated odd number of times.
	    hence, the numbers which are perfect squares will be open.
	    (Only perfect squares have an odd number of factors.
	    This is because a*b=n.
	    For any number a there is a corresponding number b which 
	    is also a factor hence factors will make pairs always.
	    But when it is perfect square then a*a=n where a is sqrt(n).
	    Due to of presence of this single factor whose pair is itself will make total number of factors odd. 
	    Hence only perfect square will 
	    have odd number of factors.)
	    Number of perfect squares <= n is floor(sqrt(n))
	    
	    */
	    cout<<floor(sqrt(n))<<endl;;
	}
	return 0;
}
