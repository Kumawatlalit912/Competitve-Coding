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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    ll n, m, a;
    cin >> n >> m >> a;

    ll x, y, result;

    x = n / a;
    y = m / a;
    if (n % a != 0) {
        x = x + 1;
    }
    if (m % a != 0) {
        y = y + 1;
    }
    result = x * y;
    cout << result;
}
