#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    int flag = 0;
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
            cout<<"Prime Numbers are: "<<i<<endl;
    }
    return 0;
}
