#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==1||n==0)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int N;
    cin>>N;
    cout<<fib(N);
    return 0;
}