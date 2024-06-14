#include<iostream>
using namespace std;

//in C++ we have to declare a function before using it
int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int dem = factorial(r) * factorial(n-r);
    return num/dem;
}

int main()
{
//  int ans = nCr(5,4);
//  cout<<ans;
cout<<nCr(5,4);
}