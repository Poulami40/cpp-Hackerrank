#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    int la=a.size();
    int lb=b.size();
    cout<<la<<" "<<lb<<endl;
    cout<<a+b<<endl;
    char c;
    c=a.at(0);
    a.at(0)=b.at(0);
    b.at(0)=c;
    cout<<a<<" "<<b;
    return 0;
}
