#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n>m){
        cout<<"NO"<<endl; return;
    }

    sort(arr, arr+n);
    int seat=arr[n-1];

    for(int i=n-1; i>0; i--){
        seat += arr[i];
    }
    seat += n;

    if(seat<=m){
        cout<<"YES"<<endl; return;
    }else{
        cout<<"NO"<<endl; return;
    }
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}