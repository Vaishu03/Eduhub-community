#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {2,9,0,1,5},max= a[0],s_max=a[0],n=5;
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max = a[i];
    }
    for(int i=0;i<n;i++){
        if((a[i]>s_max)&&(a[i]<max))
        s_max = a[i];
    }
    cout << s_max;

}