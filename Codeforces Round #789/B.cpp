#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    string s;cin >> s;
    int tempcount = 1;
    vector<int> v;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            tempcount++;
        }else{
            v.push_back(tempcount);
            tempcount = 1;
        }
    }
    v.push_back(tempcount);
    
    vector<int> odd;
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==1){
            odd.push_back(i);
        }
    }




    // for(int i=0; i<add.size(); i++){
    //     cout<<odd
    // }





    int ans = 0;
    for(int i=0; i<odd.size(); i+=2){
        //cout <<(v[i+1]-v[i])<<endl;
        ans += (odd[i+1]-odd[i]);
    }

    cout << ans << endl; return ;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}