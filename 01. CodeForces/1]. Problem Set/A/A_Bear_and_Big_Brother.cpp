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

    int a, b;
    cin >> a >> b;

    if(a==b){
        cout << 1;
        return 0;
    }
    int ans = 0;

    while (a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans;

    return 0;
}