#include<bits/stdc++.h>
using namespace std;
int isSbs(string s2){
    int N = s2.length(); 
    int M = 10; 
    string s1="@gmail.com";
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
}
int main(){
    multimap<string ,string > db;
    int n,i;
    string name,email;
    cin>>n;
    vector<string> gn;
    while(n--){
        cin>>name;
        cin>>email;
        db.insert(pair<string , string >(name,email));
        
    }
     for (auto x: db) {
        int res=isSbs(x.second);
        if(res!=-1){
            gn.push_back(x.first);
        }
  }
    sort(gn.begin(),gn.end());
    for(int i=0;i<gn.size();i++){
        cout<<gn[i]<<endl;
    }
    return 0;
}

