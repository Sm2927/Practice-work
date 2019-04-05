#include<bits/stdc++.h>
using namespace std;
int main()
{
      int p,f,k;
      vector<int> ps;
      cin>>p;
      for(int i=0;i<p;i++){
         cin>>k;
         ps.push_back(k);
      }
      cin>>f;
      vector<int> fs(f);
      for(int i=0;i<f;i++){
          fs[i] = -1;
      }
      vector<int> lru(f);
      for(int i=0;i<f;i++){
          lru[i] = 0;
      }
      
      
      int s=0,flag;
      int pf = 0;
      for(int i=0;i<p;i++){
          flag = 0;
          for(int j=0;j<f;j++){
              if(ps[i] == fs[j]){
                  flag = 1;
                  lru[j] = *max_element(lru.begin(),lru.end()) + 1;
              }
          }
              if(flag == 0){
                  pf++;
                  fs[s] = ps[i];
                  lru[s] = *max_element(lru.begin(),lru.end()) + 1;
                  
              }
              s = min_element(lru.begin(),lru.end()) - lru.begin();
              for(int k=0;k<f;k++){
                  cout<<fs[k]<<" ";
              }
              cout<<endl;
              
          
      }
      cout<<"page faults: "<<pf<<endl;
      return 0;
}
