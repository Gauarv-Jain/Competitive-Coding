#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
    bool dog = false;
    bool cat = false;
    
    int dl = x-a;
    if(dl<0){dl=0;}
    int cl = y-b;
    if(cl<0){cl=0;}

    if(cl ==0 && dl ==0){
        cout<<"YES"<<endl; return;
    }

    int some = c-cl-dl;

    if(some>=0){
        cout<<"YES"<<endl; return;
    }else{
        cout<<"NO"<<endl; return;
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}