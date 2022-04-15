#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
int fac[1002];
int fac_inv[1002];
int dp[3010][3010];
//memset(dp, 0 , sizeof(dp));

int recur(int index, int sum, map<int, int> &mp ){

    if(dp[index][sum] != 0 ){
        return dp[index][sum] ;
    }

    if(sum == 0){
        return 1;
    }
    
    if(sum<0){
        return 0;
    }
    auto it = mp.begin();
    if(index>0){
        for(int i=1; i<=index; i++){
            it++;
        }
    }

    if(index == mp.size()-1) {
        int toreturn = 0;
        if( (it->second) >= sum ){
            toreturn = 1;
        }
        dp[index][sum] = toreturn;
        return toreturn;
    }

    int ans=0;
    it++;
    auto newit = it;
    it--;
    for(int i=0; i<=it->second; i++){
        //int sub = (it->first*i) ;
        ans += recur(index+1, sum-i, mp);
    }
    dp[index][sum] = ans;
    return ans;

}

void solve(){

    memset(dp, 0, sizeof(dp));
    int n,k; cin>>n>>k;

    map<int, int> mp;

    vector<int> c;
    for(int i=0; i<2*n; i++){
        int temp; cin>>temp; 
        c.push_back(temp); 
        if(temp%2==0){
            mp[temp]++; 
        }        
    }

    sort(c.begin(), c.end());

    int sumev=0;
    for(int i=0; i<2*n; i++){
        if(c[i]%2==0){
            sumev += c[i];
            
        }
    }
    
    if(k>=(sumev-n) && k<=(sumev)){

        int flip = sumev - k ;
        int odd = flip;
        int even = n - flip;

        cout<<recur(0, even, mp)<<endl;

        memset(dp, 0, sizeof(dp));

        return;

    }else{
        cout<<0<<endl;return;
    }

}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}