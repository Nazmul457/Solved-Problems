#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int originaln = n;
    int arm = 0;
    int digits=0;
    while(n>0)
    {
        digits= n%10;
        arm+= (pow(digits,3));
        n=n/10;
    }
    if(arm==originaln)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Non Armstrong Number"<<endl;
    }
    return 0;
}
