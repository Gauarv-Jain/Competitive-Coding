#include <bits/stdc++.h>
using namespace std;
#define int long long

int power(int x, int y){
    int res = 1;
    while(y>0){
        if(y&1){
            res = res*x;
        }
        y = y>>1;
        x = x*x ;
    }
    return res;
}

void solve(){
    int x,c; cin>>x>>c;
    map<int,int> mp;
    int i = 2;
    int n = x;

    if(c==1 || x==1){
        cout<<1<<endl; return;
    }

    while (n % 2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2){
        mp[n]++;
    }

    int ans =1;
    for(auto x: mp){

        if( (x.second%c) == 0 ){
            continue;
        }
        int tom = power( x.first, (x.second%c) );
        ans = ans*tom;
        
    }
    cout << ans <<endl; return;
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}