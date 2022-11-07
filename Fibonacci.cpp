#include <iostream>
using namespace std;

void printFib(int n)
{
    int first = 0;
    int second = 1;
    int next;
    for(int i=1; i<=n; i++)
    {
        cout<<first<<endl;
        next = first+second;
        first=second;
        second = next;

    }
    return;
}

int main()
{
    int n;
    cin>>n;
    printFib(n);
    return 0;
}