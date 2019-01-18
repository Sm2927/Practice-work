#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
   auto cnt = 0;
    vector<int> f(26, 0); //vector for all alphabets to calculate their frequency
    for (auto c : a) {
      ++f[c - 'a'];
      }
    for (auto c : b) {
      --f[c - 'a']; 
      } //subtracting values for common characters
    for (auto val : f) {
      cnt += abs(val);
      }
    return cnt;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
