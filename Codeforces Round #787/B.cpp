#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    bool re = false;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0 && i!=0){
            cout<<-1<<endl;
            re =  true; 
        }
    }
    if(re){
        return;
    }
    if(n==1){
        cout<<0<<endl; return;
    }
    if(arr[n-1]==0){
        cout<<-1<<endl; return;
    }

    int ans = 0;
    for(int i=n-2; i>=0; i--){
        if(arr[i]>=arr[i+1]){
            while(arr[i]>=arr[i+1]){
                arr[i] = arr[i]/2;
                ans++;
            }
            if(arr[i]==0){
                if(i!=0){
                    cout<<-1<<endl; return;
                }
            }
        }

    }
    cout<<ans<<endl; return ;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}