#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    int k; cin>>k;
    vector<int> v(n); 
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    if(k==1){
        if(n%2==0){
            n--;
        }
        cout<<(n/2)<<endl;
        return;
    }

    int piles =0;
    for(int i=1; i<n-1; i++){
        if(v[i]>v[i+1]+v[i-1]){
            piles++;
        }
    }

    cout<<piles<<endl;
    return ;
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}