/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n;
          cin >> n;
          if(n%5 == 0 and n%11 == 0){
            cout << "BOTH" << endl;
          }else if(n%5 != 0 and n%11 != 0){
            cout << "NONE" << endl;
          }else{
            cout << "ONE" << endl;
          }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}