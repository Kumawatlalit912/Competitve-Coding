#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // count the total substring
        ll count = 1;
        // as there will be atleast one  block

        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                count++;
            }
        }

        cout << ((count % 3 == 2) ? "RAMADHIR" : "SAHID") << endl;
    }

    return 0;
}
