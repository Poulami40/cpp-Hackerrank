/*Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    printf("%.3f\n",d);
    printf("%.9f\n",e);
    return 0;
}
