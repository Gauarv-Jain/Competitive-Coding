#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    string s; cin>>s;
    if(s.length()==1){
        cout<<"NO"<<endl; return;
    }else{
        if(s[0]!=s[1]){
            cout<<"NO"<<endl; return;
        }
        if(s[s.length()-1] != s[s.length()-2]){
            cout<<"NO"<<endl; return;
        }
    }
    int count = 1;
    for(int i=1; i<s.length(); i++){
        if(s[i]!=s[i-1]){
            if(count==1){
                cout<<"NO"<<endl; return;
            }
            count = 1;
        }else{
            count++;
        }
    }
    cout<<"YES"<<endl; return;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}