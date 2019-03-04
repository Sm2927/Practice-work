//https://ide.geeksforgeeks.org/Vp2sm5WkPd
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>v[],int a,int b){
    v[a].push_back(b);
    v[b].push_back(a);
    
}
void disp(vector<int> v[],int n){
    for(int i=0;i<n;i++){
        cout<<i;
        for(auto x: v[i]){
            cout<<" -> "<<x;
        }
        cout<<endl;
    }
}

int main() {
	int n,a,b;
	cin>>n; //the number of vertices
	vector<int> v[n];
	int e;
	cin>>e; //the number of edges
	for(int i=0;i<e;i++){
	    cin>>a>>b;
	    addEdge(v,a,b);
	}
	disp(v,n);
	
	return 0;
}
