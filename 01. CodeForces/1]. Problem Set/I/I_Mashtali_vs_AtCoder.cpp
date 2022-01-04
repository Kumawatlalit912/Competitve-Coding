/*
    solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta]
*/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

// ------ TypeDef Micro's -------
using ll = long long;
using ld = long double;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<long>;
using vll = std::vector<long long>;
using vvl = std::vector<vl>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using vs = std::vector<string>;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using mii = std::map<int, int>;
using mll = std::map<long long, long long>;
using msi = std::map<string, int>;
using umii = std::unordered_map<int, int>;
using umll = std::unordered_map<long long, long long>;
using si = std::set<int>;
using sll = std::set<long long>;
/* --------  Pre-difined Constants------- */
const long long mod = 1e9 + 7, inf = 1e18;
const int Mod_N = 10e5 + 5;
#define PI 3.1415926535897932384626433832795l

/*--------- Loop's Shortcuts ------------*/
#define loop(a, b, c) for (auto a = b; a < c; ++a)
#define loopI(a, b, c, d) for (auto a = b; a <=c; a+=d)
#define loopD(a, b, c, d) for (auto a = b; a >=c; a-=d)

/*-------- In-Built Func^ Shortcuts ------*/
#define pb push_back
#define pp pop_back
#define mp make_pair
#define eb emplace_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(x) accumulate(all(x), 0LL)
#define sb(x) __builtin_popcountll(x)
#define sz(x) (auto)(x).size()
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())
#define endl "\n"
/* -------- FAST IO operation ------ */
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*--------- Input Output Templets & Util's ---- */
template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &p){
    return stream << p.first << " " << p.second;}
template <typename T1, typename U> std::istream &operator>>(istream &is, pair<T1, U> &p){
    is >> p.first >> p.second;return is;}
template <typename T> std::ostream &operator<<(std::ostream &out, const vector<T> &vec){
    for (const T &x : vec) out << x << ' '; return out;}
template <typename T> std::istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in;}
const int maxN=300010, LOG=20;
 
int n, m, k, u, v, x, y, t, a, b, ans;
int par[maxN], dp[maxN], dead[maxN];
vector<int> G[maxN];
 
void dfs(int node){
	for (int v:G[node]) if (v!=par[node]){
		par[v]=node;
		dfs(v);
		dp[node]^=dp[v]+1;
    }
}
void solveTestCases(){
    cin >> n;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    dfs(1);
    ans = dp[1];
    cout << 1 + (ans == 0);
    dead[1] = 1;
    for (int i = 2; i <= n; i++){
        vi vec;
        int v = i;
        while (!dead[v]){
            vec.pb(v);
            dead[v] = 1;
            v = par[v];
        }
        reverse(all(vec));
        for (int v : vec){
            // Kill v
            ans ^= dp[v] + 1;
            ans ^= dp[v];
            ans ^= 1;
        }
        cout << 1 + (ans == 0);
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    fast;

    int t = 1;
    // cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}