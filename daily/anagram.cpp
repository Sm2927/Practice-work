//https://practice.geeksforgeeks.org/problems/anagram/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	string s1,s2;
	int n1,n2,cnt;
	cin>>t;
	while(t--){
	    cin>>s1>>s2;
	    n1 = s1.length();
	    n2 = s2.length();
	    if(n1 != n2){
	        cout<<"NO"<<endl;
	        
	    }
	    else{
	        
	        cnt= 0;
	        for(auto c: s1){
	            cnt += (int)c;
	        }
	        for(auto c: s2){
	            cnt -=(int)c;
	        }
	        
	        if(cnt == 0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	        
	        
	        
	        
	        
	    }
	    
	}
	return 0;
}
