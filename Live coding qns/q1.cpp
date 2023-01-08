#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {2,0,0,1,0,2},i=0,n=6,zero=0,one=0,two=0;
    while(i<n){
        if(a[i] == 0){
        zero++;
        }
        else if(a[i] == 1){
        one++;
        }
        else{
        two++;
        }
        i++;
    }
    for(int i=0;i<zero;i++){
        a[i] = 0;
    }
    for(int i=zero;i<zero+one;i++){
        a[i] = 1;
    }
    for(int i=zero+one;i<n;i++){
        a[i] = 2;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}