#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int num[4]={a,b,c,d};
    int temp=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
        if(num[j]<num[i])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
        }
    }
    return num[0];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
