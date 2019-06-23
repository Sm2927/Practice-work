**for fast I/O**:<br/>
`ios_base::sync_with_stdio(false);`<br/>
 `cin.tie(NULL);`
              
**Greedy algorithms** :
at every step, we make the choice that looks best at that moment and we get the optimal solution for the entire                             problem.

**Backtracking** :
Go ahead with the approach, check if satisfied. If not, come back. Start with another alternative.

**Skip list**:
an advanced data structure that introduces multi-layers in linked lists for linear traversal and complexity is reduced from O(n) (for simple linked list) to O(sqrt(n)). It can be apllied for sorted linked lists.

**Binary search for special cases**:
{O(log n)}
can be used to search for element in the sorted array that has been rotated once (pivot is kept as the element whose next element is smaller)



**for substrings** - use concept of sliding window



**for non-repeating sequences** - use unordered (or hash) set or simply set




![check this out](leetcode/slWinLongNonRepSubstring.cpp)



**Recursion**
![see](https://www.geeksforgeeks.org/recursion/)


**for assigning some default value to a 2d vector**


        vector<vector<int>> v(r, vector<int>(c,default_value));
        
 **for converting int to string and vice-versa**
string  sp = to_string(m);
              
int ans = stoi(s);

