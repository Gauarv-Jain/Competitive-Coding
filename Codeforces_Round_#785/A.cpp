#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    string s; cin>>s;
    int n = s.length();
    if(s.length()==1){
        int ans = s[0] - 'a';
        cout<<"Bob "<<ans+1<<endl; return;
    }
    
    if(s.length()%2 == 0){
        int ans = 0;
        for(int i=0;i<s.length();i++){
            ans += s[i] - 'a' + 1;
        }
        cout<<"Alice "<<ans<<endl; return;
    }else{
        int ans = 0;
        for(int i=0;i<s.length();i++){
            ans += s[i] - 'a' + 1;
        }
        int l = s[0] - 'a' + 1;
        int r = s[n-1] - 'a' + 1;
        int remove = min(l,r);

        ans -= 2*remove;
        cout<<"Alice "<<abs(ans)<<endl; return;
    }
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}