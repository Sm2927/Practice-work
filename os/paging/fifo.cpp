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
      
      int s=0,flag,pf;
      pf =0;
      for(int i=0;i<p;i++){
          flag=0;
          for(int j=0;j<f;j++){
              if(ps[i] == fs[j]){
                  flag = 1;
              }
          }
          if(flag == 0){
              pf++;
              fs[s] = ps[i];
              s = (s+1) % f;
               for(int i=0;i<f;i++){
              cout<<fs[i]<<" ";
          }
          }
         else{
             for(int i=0;i<f;i++){
              cout<<"- ";
          } 
         }
         
          cout<<endl;
      }
      
      cout<<"page faults - "<<pf<<endl;
      return 0;
}

