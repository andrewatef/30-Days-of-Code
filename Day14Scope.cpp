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
      
    Difference(vector<int>h):elements(h){}
    
    void computeDifference()
    {
        
        vector<int> sorted=elements;
        sort(begin(sorted),end(sorted));
        int tmp=sorted[sorted.size()-1]-sorted[0];
        maximumDifference= (tmp)>0?tmp:-tmp;
    }

	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}