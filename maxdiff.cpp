#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> a){
        elements = a; //copying a vector
    }
    void computeDifference(){
        sort(elements.begin(),elements.end());
        unsigned int n = elements.size();
        maximumDifference = elements[n-1] - elements[0];
    }
}; // End of Difference class
