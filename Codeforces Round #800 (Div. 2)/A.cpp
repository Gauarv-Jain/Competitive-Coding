#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int a,b; cin>>a>>b;
    string s="";

    while(a>0 && b>0){
        s += "01";
        a--; b--;
    }

    if(b>0){
        for(int i=0; i<b; i++){
            s += "1";
        }
    }else if(a>0){
        for(int i=0; i<a; i++){
            s += "0";
        }
    }

    cout<<s<<endl;
    return;
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}