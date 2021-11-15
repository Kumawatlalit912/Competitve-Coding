#include <bits/stdc++.h>
using namespace std;
using l = long;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    long n;
    cin >> n;

    long ans = 0;

    while(n--){
        string s;
        cin >> s;

        if(s=="Tetrahedron"){
            ans += 4;
        }
        if (s == "Cube")
        {
            ans += 6;
        }
        if (s == "Octahedron")
        {
            ans += 8;
        }
        if (s == "Dodecahedron")
        {
            ans += 12;
        }
        if (s == "Icosahedron")
        {
            ans += 20;
        }
    }

    cout << ans;

    return 0;
}
