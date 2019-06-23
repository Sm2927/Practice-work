https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string q;
    map<char,int> nom;
    nom.insert(make_pair('0',6));
    nom.insert(make_pair('1',2));
    nom.insert(make_pair('2',5));
    nom.insert(make_pair('3',5));
    nom.insert(make_pair('4',4));
    nom.insert(make_pair('5',5));
    nom.insert(make_pair('6',6));
    nom.insert(make_pair('7',3));
    nom.insert(make_pair('8',7));
    nom.insert(make_pair('9',6));
    while(t--){
        cin>>q;
        // cout<<q<<endl;
        int ms = 0;
        // string qs = to_string(q);
        for( char c : q){
            ms += nom[c];
            // cout<<c<<" "<<nom[c]<<" ";
        }
        // cout<<ms<<endl;
        if(ms % 2 == 0){
            for(int i=0;i<ms/2;i++){
                cout<<"1";
            }
            cout<<endl;
        }
        else if(ms %2 != 0){
            ms -= 3;
            cout<<"7";
            for(int i=0;i<ms/2;i++){
                cout<<"1";
            }
            cout<<endl;
        }
     
    }
    return 0;
}
