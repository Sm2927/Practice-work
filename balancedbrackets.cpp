//https://www.hackerrank.com/challenges/balanced-brackets/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=stacks-queues


#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    if(s.length()%2 != 0){
        return "NO";
    }
    stack <char> st;
    map <char, char> mp = {{'}','{'} , {']','['}, {')','('}};
    for(auto c: s){
        if(c == '{' || c== '(' || c == '['){
            st.push(c);
           
        }
        else{
           if(!st.empty() && mp[c] == st.top()){  //try writing "mp[c] == st.top() && !st.empty()" to see the error...at times compiler design can be useful
               st.pop();
           } 
           
           else{
               
               return "NO";
              
           }
        }
    }
    if(st.empty()){
        return "YES";
    }
    else{
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
