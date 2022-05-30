/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n;
          string a, b;
          cin >> n >> a >> b;
          a.push_back('0');
          b.push_back('0');
          int cnt = 0;
          for(int i = 0; i < n; i++) {
              cnt += (a[i] == '1') - (a[i] == '0');
              if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
                  cout << "NO\n";
                  return;
              }
          }
          cout << "YES\n";
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}