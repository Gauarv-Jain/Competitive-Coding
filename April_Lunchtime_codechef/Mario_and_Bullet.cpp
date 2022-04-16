#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int x,y,z; cin>>x>>y>>z;
    int t = y/x; 
    int ans = z - t; 
    if(ans<0){ 
        cout<<0<<endl;
    }else{ 
        cout<<ans<<endl;
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}