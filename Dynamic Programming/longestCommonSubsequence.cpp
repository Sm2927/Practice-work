#include <iostream>
using namespace std;
int maxm(int a,int b){
    return a>b?a:b;
}
int main() {
	//code
	int t,n1,n2;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>n1>>n2;
	    cin>>s1>>s2;
	    int a[n1+1][n2+1];
	    for(int i=0;i<=n1;i++){
	        a[i][0] = 0;
	    }
	    for(int i=0;i<=n2;i++){
	        a[0][i] = 0;
	    }
	    for(int i=1;i<=n1;i++){
	        for(int j=1;j<=n2;j++){
	            if(s1[i-1] == s2[j-1]){
	                a[i][j]= 1 + a[i-1][j-1];
	            }
	            else{
	                a[i][j] = maxm(a[i-1][j],a[i][j-1]);
	            }
	        }
	    }
	    cout<<a[n1][n2]<<endl;
	}
	return 0;
}
