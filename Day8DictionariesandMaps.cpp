#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int t;
    cin>>t;
    string name,no;
    map<string,string>input;
    for(int i=0;i<t;i++)
    {
        cin>>name>>no;
        input[name]=no;
    }   
    while(cin>>name)
    {
        if(input[name]=="")cout<<"Not found"<<endl;
        else cout<<name<<"="<<input[name]<<endl;
    }
    return 0;
}
