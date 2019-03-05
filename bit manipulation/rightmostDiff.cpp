//https://practice.geeksforgeeks.org/problems/rightmost-different-bit/0/?ref=self

#include <iostream>
using namespace std;
int special(int n){
    int cnt=0;
    while(n!=0){
        if(n&1){
            break;
        }
        n= n>>1;
        cnt++;
        
    }
    return cnt+1;
}
int main() {
	//code
	std::ios_base::sync_with_stdio(false);
	int t,n1,nh1,nh2,n2,cnt;
	cin>>t;
	while(t--){
	    cnt=0;
	    cin>>n1>>n2;
	    
	    while(n1!=0 && n2!=0){
	       
	       nh1 = n1 & 1;
	      
	       nh2 = n2 & 1;
	        cnt++;
	        if(nh1 != nh2){
	           break;
	       }
	       n1 = n1>>1;
	        n2 = n2>>1;
	      
	      
	    }
	    //cout<<n1<<" "<<n2<<endl;
	    if(n1 == 0 && n2!=0){
	        //cout<<cnt<<endl;
	       // cout<<"HGFJHT"<<endl;
	        cnt += special(n2);
	    }
	    else if(n2 == 0 && n1!=0){
	        //cout<<"HGFJHT"<<endl;
	        cnt += special(n1);
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
