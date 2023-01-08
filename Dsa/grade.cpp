#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score;
    cin >> score;
    if ((score > 100) || (score < 0))
    {
        cout << "Invalid score" << endl;
        return 0;
    }
    switch (score / 10)
    {
    case 10:
    case 9:
        cout << "A+" << endl;
        break;
    case 8:
        cout << "A" << endl;
        break;
    case 7:
    case 6:
    case 5:
        cout << "B" << endl;
        break;
    default:
        cout << "D" << endl;
        break;
    }
}