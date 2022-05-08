#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int numzeros = 0;
    set<int> s;
    bool duplicates = false;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            numzeros++;
        }else if(s.find(arr[i])!=s.end()){
            duplicates = true;
        }else{
            s.insert(arr[i]);
        }
    }

    if(numzeros==0 && !duplicates){
        cout<<n+1<<endl; return;
    }else if(numzeros==0 && duplicates){
        cout<<n<<endl; return;
    }else{
        cout<<n-numzeros<<endl; return;
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}