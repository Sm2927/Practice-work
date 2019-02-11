//generating binary numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
void genBin(int n){
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    queue<string> q;
    string s1,s2;
    q.push("1");
    while(n--){
        s1 = q.front();
        s2 = s1;
        cout<<s1<<" ";
        q.pop();
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the number upto which you want to generate the binary number"<<endl;
    cin>>n;
    genBin(n);
    return 0;
}
