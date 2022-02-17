#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string check(int x)
{
    if(x==1)return "Not prime";

    for(int i=2;i*i<=x;i++)if(x%i==0)return "Not prime";
    
    return "Prime";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        cout<<check(x)<<endl;
    }
    return 0;
}
