#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){

    int t; cin>>t;
    while(t--){ 
        int n; cin>>n;
        int arrl[n]; int arrr[n]; 
        for(int i=0; i<n; i++){ 
            cin>>arrl[i];
        }
        for(int i=0; i<n; i++){ 
            cin>>arrr[i];
        }
        int ans=0;
        for(int i=0; i+1<n; i++){
            ans += min(arrr[i], arrl[i+1]);
        }

        cout<<ans<<endl;
    }

}
