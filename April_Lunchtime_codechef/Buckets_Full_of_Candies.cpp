#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //N,M,L  — representing the number of friends, number of candies that you have, and the number of buckets
    //in general, the ith friend has L+i−1 buckets.
    int n,m,l; cin>>n>>m>>l;
    int lastb = l + n -1;
    int rem;

    if(n == 0){
        cout<<m<<endl;return;
    }
    if(n == 1){
        if(l<=m){
            cout<<(m%l)<<endl;return;
        }else{
            cout<<m<<endl;return;
        }
    }
    
    if(lastb<m){
        rem = m%lastb;
    }else{
        if(l<=m){
            cout<<0<<endl;return;
        }else{
            cout<<m<<endl;return;
        }
    }
    
    if(rem < l){
        cout<<rem<<endl;return;
    }else{
        cout<<0<<endl;return;
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}