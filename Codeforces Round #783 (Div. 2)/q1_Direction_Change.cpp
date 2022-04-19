#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    if(n==1 && m==1){
        cout<<0<<endl;return;
    }
    if(n==1 || m==1){
        if(abs(m-n)==1){
            cout<<1<<endl;return;
        }
        cout<<-1<<endl;return;
    }

    int r=0, d=0;
    r=m-1; d=n-1;
    if(abs(r-d)==1){
        cout<<r+d<<endl;return;
    }
    int diff = abs(r-d);
    int ma = max(r,d);
    if(diff%2==0){
        cout<<2*ma<<endl;return;
    }else{
        cout<<(2*ma)-1<<endl;return;
    }


    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}