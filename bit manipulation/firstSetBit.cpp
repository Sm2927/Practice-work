//https://practice.geeksforgeeks.org/problems/find-first-set-bit/0

#include <iostream>
using namespace std;

int main() {
	//code
	std::ios_base::sync_with_stdio(false);
	int t,n,cnt;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%2 != 0 && n!=0){
	        cout<<"1"<<endl;
	    }
	    else if(n==0){
	        cout<<"0"<<endl;
	    }
	   
	    else{
	        cnt=0;
	        while(n!=0){
	            if(n&1){
	                break;
	            }
	            n= n>>1;
	           // cout<<n<<" "<<cnt<<endl;
	            cnt++;
	        }
	        cout<<cnt+1<<endl;
	    }
	    
	}
	return 0;
}
