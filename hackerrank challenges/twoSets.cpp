//https://www.hackerrank.com/challenges/between-two-sets/problem?isFullScreen=false

int getTotalX(vector<int> a, vector<int> b) {
    /*
     * Write your code here.
     */
     int na = a.size();
     int nb= b.size();
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int a1 = a[na-1];
     int b1 = b[0];
   //  cout<<a1<<" "<<b1<<endl;
     int cnt = 0,ca=0,cb = 0;
     for(int i=a1;i<=b1;i++){
         ca = 0;
         for(int j=0;j<na;j++){
             
             if(i % a[j] == 0){
                 ca++;
             }
             
              if(ca == na){
                  cb = 0;
                  for(int j=0;j<nb;j++){
                      
                      if(b[j] % i == 0){
                          cb++;
                      }
                      
                  }
              }

              if(ca == na && cb == nb){
                  cnt++;
              }

         }
        
     }
     return cnt;

}
