//finding all possible permutations of an array
#include <iostream>
#include <algorithm>



using namespace std;

int main() {
    ios::sync_with_stdio(false);
   
    unsigned int a[3];
    for(unsigned int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<"The possible combinations: "<<endl;
    do{
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(next_permutation(a,a+3));
    cout<<"After the loop: "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return 0;
    
}
