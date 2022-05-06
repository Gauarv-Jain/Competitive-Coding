#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    string s; cin >> s;
    if(s.length()==1){
        cout<<1<<endl; return;
    }

    int pos1 = -1;
    int pos0 = -1;
    int i=0;
    if(s[0]=='0'){
        cout<<1<<endl; return;
    }

    while(s[i] != '0' && i<s.length()){
        if(s[i] == '1'){
            pos1 = i;
        }
        i++;
    }

    if(i!=s.length()){
        pos0 = i;
    }

    if(pos1 == -1 && pos0 == -1){
        cout<<s.length()<<endl; return;
    }

    if(pos1 == -1){
        cout<<pos0+1<<endl; return;
    }

    if(pos0 == -1){
        cout<<(s.length() - pos1)<<endl; return;
    }

    else{
        cout<<pos0 - pos1 + 1<<endl; return;
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}