#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    for(int i=1; i<n-1; i++){
        if(    (  (arr[i] - arr[i-1]) == 2*(arr[i+1] - arr[i] ) )    ||  (  (arr[i+1] - arr[i] ) == 2*(arr[i] - arr[i-1]) )          ){

        }else{
            cout<<"No"<<endl; return;
        }
    }
    
    cout<<"Yes"<<endl; return;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}