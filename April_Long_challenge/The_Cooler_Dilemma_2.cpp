#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y; cin>>x>>y;

    if(x==y){
        cout<<0<<endl;
        return;
    }

    if(y%x==0){
        cout<<(y/x)-1<<endl;
        return;
    }
    
    cout<<(y/x)<<endl;
    return;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}