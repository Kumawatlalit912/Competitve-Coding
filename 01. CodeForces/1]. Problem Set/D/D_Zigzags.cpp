/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve(){
        int n;
        std::cin >> n;
        long long a[n], cnt[n + 1] = {0}, ans = 0ll, use = 0ll;
        for (int i = 0; i < n; ++i)
            std::cin >> a[i];
        for (int i = 0; i < n; ++i){
            for (int j = (i + 1); j < n; ++j){
                if (a[j] == a[i]) ans += use;
                use += cnt[a[j]];
            }
            cnt[a[i]]++, use = 0ll;
        }
        cout << ans << '\n';
    }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.failbit;
    cin.badbit;

    int t = 1;
    cin >> t;

    while (t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}