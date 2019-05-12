#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,i,p;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    vector <int> taste;
	    for(i=0;i<n;i++){
	        cin>>p;
	        taste.push_back(p);
	    }
	    auto it = min_element(taste.begin(), taste.end());
	    cout<<*it<<endl;
	   
	}
	return 0;
}
