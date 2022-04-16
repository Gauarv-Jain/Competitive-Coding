#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v;
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++){
        int temp ; cin>>temp;
        if(temp == 1){
            count1++; 
        }else if(temp == 2){
            count2++; 
        }
    }

    int ans = 0;

    for(int i=0; i<count1; i++){
        ans += n - 1 - i;
    }
    for(int i=0; i<count2; i++){
        ans += count2 - 1 - i;
    }

    cout << ans << endl; return ;
    // int i = 0;
    // int ans=0;
    // while(v[i]<3 || i<(v.size()-1)){
    //     if(v[i]==1){

    //         ans += v.size() - i - 1;

    //     }else if(v[i]==2){
    //         if(i != v.size() - 1){
    //             if(v[i+1]==2){
    //                 ans++;
    //             }
    //         }
            
    //     }
    //     i++;   
    // }
    // cout<<ans<<endl;return ;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}