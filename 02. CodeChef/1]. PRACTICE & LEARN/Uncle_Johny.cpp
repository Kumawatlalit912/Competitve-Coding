#include <bits/stdc++.h>
using namespace std;
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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        cin >> arr[0];
        int val = arr[arr[0]];
        sort(arr.begin() + 1, arr.end());
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == val)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
