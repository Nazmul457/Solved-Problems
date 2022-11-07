#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int result = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10; //returns the digits that has to be multiplied with 2^
        result+= x*y;
        x*=2; //retuns power
        n/=10;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int r = binaryToDecimal(n);
    cout<<r;
    return 0;
}