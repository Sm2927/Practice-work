#include<bits/stdc++.h>

using namespace std;
int main()
{
    long unsigned int n,num;
    char name[100];
    scanf("%lu",&n);
    map<string, int> mp;
    for(unsigned int i=0;i<n;i++){
        scanf("%s", name);
        scanf("%lu", &num);
        mp.insert({ name, num });  //or  mp[name]=num; 
    }
    
     while(cin >> name) {//check how the program continues to run as long as the user gives input
    if (mp.find(name) != mp.end()) {
        cout << name << "=" << mp.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    }
    return 0;
}


