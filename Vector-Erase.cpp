#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>vec;
    int v;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        vec.push_back(v);
    }
    int x,a,b;
    cin>>x>>a>>b;
    vec.erase(vec.begin()+(x-1));
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    cout<<vec.at(i)<<" ";
    return 0;
}
