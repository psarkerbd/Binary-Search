#include<bits/stdc++.h>
using namespace std;

#define out(x) cout << x << "\n"

// O(n) solution

//int power(int x, int y)
//{
//    if(y == 0) return 1;
//
//    if(y % 2 == 0)
//    {
//        int r = power(x, y/2);
//        return r*r;
//    }
//
//    else
//    {
//        return x * power(x, y/2) * power(x, y/2);
//    }
//}
//
//int main()
//{
//    int x,y;
//
//    while(cin >> x >> y)
//    {
//        cout << power(x, y) << "\n";
//    }
//}


// O(lgN) Solution

// when y is positive
// the function can be optimized to O(logn) by calculating power(x, y/2) only once and storing it.

//int power(int x, int y)
//{
//    int temp;
//
//    if(y == 0) return 1;
//
//    temp = power(x, y/2);
//
//    if(y % 2 == 0) return temp * temp;
//
//    else
//    {
//        return x * temp * temp;
//    }
//}
//
//int main()
//{
//    int x,y;
//
//    while(cin >> x >> y)
//    {
//        cout << power(x, y) << "\n";
//    }
//}


// O(lgn), when y is negative

float power(int x, int y)
{
    float temp=0.0;

    if(y == 0) return 1;

    temp = power(x, y/2);

    if(y % 2 == 0) return temp * temp;

    else
    {
        if(y > 0) return x * temp * temp;

        else
        {
            return temp * temp / x;
        }
    }
}

int main()
{
    int x,y;

    while(cin >> x >> y)
    {
        cout << power(x, y) << "\n";
    }
}
