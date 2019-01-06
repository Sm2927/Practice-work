//finding all possible permutations of an array
#include <iostream>
#include <algorithm>



    
#include <iostream>
#include <algorithm>



using namespace std;

int main() {
    ios::sync_with_stdio(false);
   
    unsigned int a[8] = {1, 6, 8, 9, 10, 3, 5, 10};
    //sort(a, a+8);
    
    vector <int>v(a,a+8); //lower_bound requires an iterator to operate, hence vector required
    vector<int> ::iterator lb,ub;
    lb = lower_bound(v.begin(), v.end(), 10) ;
    ub = upper_bound(v.begin(), v.end(), 10) ;
    cout<<"Lower bound: "<<lb- v.begin()<<endl; 
    cout<<"Upper bound: "<<ub- v.begin()<<endl;
       
    return 0;
    
}
//Output:
//Lower bound: 4
//Upper bound: 8
