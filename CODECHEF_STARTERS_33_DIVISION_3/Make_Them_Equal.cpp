#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int odd = 0;
    int even = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==1){
            odd++;
        }else{
            even++;
        }
    }

    if(odd==0 || even==0){
        cout<<"0"<<endl;
        return;
    }

    if(odd%2==1){
        cout<<even<<endl;return;
    }else{
        int ans = min((odd/2),even);
        cout<<ans<<endl;
        return;
    }
}

int32_t main(){

    int t;cin>>t;
    while(t--){
        solve();
    } 

}