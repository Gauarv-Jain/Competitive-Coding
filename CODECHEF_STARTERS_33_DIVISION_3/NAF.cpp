#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){

    int n; cin>>n;
    string s; cin>>s; 
    bool conp = false;
    bool onep = false;

    for (int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(conp){
                cout<<"2"<<endl;
                return;
            }
            conp = true;
            onep = true;
        }else{
            conp = false;
        }
        
    }

    if (onep)
    {
      cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

int32_t main(){

    int t; cin>>t; 
    while(t--){
        solve();
    }

}