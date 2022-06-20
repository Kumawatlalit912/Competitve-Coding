/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n;
		    cin>>n;
		    int odd=1,even=2,on=0,en=0,ans1=0,ans2=0;
		    for(int i=1;i<=n;i++){
		    	int a;
		    	cin>>a;
		    	if(a&1) ans1+=abs(odd-i),ans2+=abs(even-i),on++,odd+=2,even+=2;
		    	else en++;
		    }
		    if(on==en+1) cout<<ans1<<endl;
		    else if(on+1==en) cout<<ans2<<endl;
		    else if(on==en) cout<<min(ans1,ans2)<<endl;
		    else cout<<-1<<endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}