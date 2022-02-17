#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d1,d2,y1,y2,m1,m2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    
    if(y1==y2)
    {
        if(m1==m2)
        {
            if(d1<=d2) cout<<0;
            else cout<<15*(d1-d2);
        }
        else if(m1<m2)cout<<0;
        else  cout<<500*(m1-m2);
    }
    else if(y1<y2)cout<<0;
    else cout<<10000;
    

     
    return 0;
}
