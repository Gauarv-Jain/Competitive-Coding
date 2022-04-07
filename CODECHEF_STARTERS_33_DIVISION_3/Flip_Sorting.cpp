#include <bits/stdc++.h>
using namespace std;
//#define int long long


int32_t main(){

    int t; cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int fc = 0;
        vector<pair<int,int>> ans;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(fc%2 == 0){
                    ans.push_back({(i+1),(n-i)});
                    fc++;
                }
            }else{
                if(fc%2 == 1){
                    ans.push_back({(i+1),(n-i)});
                    fc++;
                }
            }
        }

        cout<<ans.size()<<endl;
        for(auto ans: ans){
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }

}