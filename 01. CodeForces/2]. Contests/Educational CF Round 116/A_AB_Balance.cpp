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

    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll ct = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
                ct++;
            else if (s[i] == 'b' && s[i + 1] == 'a')
                ct--;
        }
        if (ct == 0)
        {
            cout << s << endl;
        }
        else if (ct == 1)
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                cout << s[i];
            }
            cout << "a\n";
        }
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                cout << s[i];
            }
            cout << "b\n";
        }
    }

    return 0;
}