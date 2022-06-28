#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<v[0]<<endl;
    return;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}