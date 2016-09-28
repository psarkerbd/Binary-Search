#include<bits/stdc++.h>
#define N 100
using namespace std;

int ar[N+5];

int lowerBound(int itm , int sz)
{
    int lo=0, hi=sz-1 , mid;

    while(lo <= hi)
    {
        mid = (lo + hi) / 2 ;

        if(ar[mid] == itm)
        {
            hi = mid-1;
        }

        else if(ar[mid] > itm)
        {
            hi = mid-1 ;
        }

        else if(ar[mid] < itm)
        {
            lo = mid+1;
        }
    }

    return lo;
}

int upperBound(int itm, int sz)
{
    int lo=0, hi=sz-1, mid;

    while(lo <= hi)
    {
        mid = (lo+hi) / 2;

        if(ar[mid] == itm)
        {
            lo = mid+1;
        }

        else if(ar[mid] > itm)
        {
            hi = mid - 1;
        }

        else if(ar[mid] < itm)
        {
            lo = mid+1;
        }
    }

    return lo;
}

int main()
{
    int n;

    cout << "Take array size: ";

    while(cin >> n)
    {
        int i;

        for(i=0;i<n;i++)
        {
            cin >> ar[i];
        }

        int q;
        cout << "Number of Query: ";
        cin >> q;

        while(q--)
        {
            int x;
            cin >> x;

            int lw,up;

            lw = lowerBound(x,n);

            cout << "index = " << lw << " value = " << ar[lw] << "\n";

            up = upperBound(x, n);

            cout << "index = " << up << " value = " << ar[up] << "\n";
        }

        cout << "Take array size: ";
    }

    return 0;
}
