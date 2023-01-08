#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,true_n,rem,val=0;
    cin >> n;
    true_n = n;
    while(n>0){
        rem = n%10;
        val = val*10+rem;
        n = n/10;
    }
    if(val == true_n)
    cout <<"Palindrome number" << endl;
    else
    cout <<"Not a Palindrome number" << endl;
}