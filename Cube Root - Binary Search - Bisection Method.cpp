// Cube root
// Binary Search-Bisection Method

#include<bits/stdc++.h>
using namespace std;

#define out(x) cout << x << "\n"
#define sf scanf
#define pf printf
#define ex 1e-6

typedef long long LL;

double diff(double n, double mid)
{
    if(n > (mid * mid *mid)) return n - (mid * mid *mid);
    else return (mid * mid *mid) - n;
}

double bisection(double n)
{
    double lo=0.0, hi=n, mid=0.0;

    while(true)
    {
        mid = (lo + hi) / 2.0;

        double d = diff(n,mid);

        if(d <= ex) return mid;

        if((mid * mid * mid) > n) hi = mid;
        else lo = mid;
    }
}

int main()
{
    double x;
    while(cin >> x)
    {
        cout << "Cube root of " << x << " is " << bisection(x) << "\n";
    }

    return 0;
}
