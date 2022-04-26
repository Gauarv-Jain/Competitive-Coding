#include <bits/stdc++.h>
using namespace std;
//#define int long long
int dp[200005];

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int left = -1;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            left = i;
            break;
        }
    }

    if(left==-1){
        cout<<0<<endl; return;
    }

    int right = -1;
    for(int i=n-1; i>0; i--){
        if(arr[i]==arr[i-1]){
            right = i;
            break;
        }
    }

    if(right - left== 1){
        cout<<0<<endl; return;
    }
    if(right - left== 2){
        cout<<1<<endl; return;
    }
    else{
        cout<<(right-left-2)<<endl; return;
    }
}

int32_t main(){
    // dp[0] = 0; dp[1] = 0;
    // dp[2] = 0; dp[3] = 1;
    // dp[4] = 1; dp[5] = 2;
    // for(int i=0; i<200005 ; i++){

    // }

    int t; cin>>t;
    while(t--){
        solve();
    }

}