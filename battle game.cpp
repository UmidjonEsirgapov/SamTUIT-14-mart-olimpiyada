#pragma comment(linker, "/STACK:102400000,102400000")
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
const double pi = acos(-1.0);
const int inf = __LONG_MAX__;
const int enf = LONG_MIN;
const long long INF = LLONG_MAX;
const long long ENF = LLONG_MIN;
const double eps = 1e-12;

int main()
{
    string s;
    int len = 0;
    cin >> len >> s;
    int cnt = 0, _cnt = 0;
    for (int i = 0; i < len; i++)
        if (s[i] == 'L')
            cnt++;
        else
            _cnt++;
    cout << (cnt + _cnt + 1) << endl;
    return 0;
}
