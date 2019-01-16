#include <iostream>
#include <vector>

using namespace std;

class Solution {
    //Write your code here
public:
    static int i;
    static int j;
   vector<char> s;
   vector<char> q;

void pushCharacter(char ch) {
    s.push_back(ch);
}

void enqueueCharacter(char ch) {
    q.push_back(ch);
}

char popCharacter(){
    int l = s.size();
    char t=s[l-1-i];
    i++;
    return t;
   

}

char dequeueCharacter() {
    int l = s.size();
    char t  = q[j];
    j++;
    
    return t;
}



};
int Solution::i=0;
int Solution::j=0;

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
//or we can include stack and queue header files
/*#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    stack<char> s;
    queue<char> q;
    public:
    void pushCharacter(char i) {
        s.push(i);
    }
    void enqueueCharacter(char i) {
        q.push(i);
    }
    char popCharacter() {
        char temp = s.top();
        s.pop();
        return temp;
    }
    char dequeueCharacter() {
        char temp = q.front();
        q.pop();
        return temp;
    }
};*/
