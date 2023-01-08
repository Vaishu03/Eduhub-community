#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {2, 0, 3, 0, 3}, n = 5, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[c] = a[i];
            c++;
        }
    }
    while (c < n)
    {
        a[c] = 0;
        c++;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}