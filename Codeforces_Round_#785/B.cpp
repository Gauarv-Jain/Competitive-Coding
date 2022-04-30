#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    string s; cin>>s;
    unordered_set<char> set;

    for(int i = 0; i < s.length(); i++) {
        set.insert(s[i]);
    }

    if(set.size() == s.length()){
        cout<<"YES"<<endl; return;
    }

    // if(s.length() % set.size() != 0){
    //     cout<<"NO"<<endl; return;
    // }

    unordered_set<char> check1;
    char check[set.size()];
    for(int i=0; i<set.size(); i++){

        if(check1.find(s[i]) != check1.end()){
            cout<<"NO"<<endl; return;
        }else{
            check1.insert(s[i]);
            check[i] = s[i];
        }
    }

    for(int i = set.size(); i < s.length(); i=i+set.size()){
        for(int j = 0; j < set.size(); j++) {
            int index = i+j;
            if(index >= s.size()){
                break;
            }
            // auto it = check.begin() ;
            // for(int k = 0; k < j; k++){
            //     it++;
            // }
            if(s[index] != check[j]){
                //cout<<s[index]<<" "<<check[j]<<endl;
                cout<<"NO"<<endl; return;
            }
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