#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int a,b; cin>>a>>b;

    if(b-a<2){
        cout<<-1<<endl;return;
    }
    if(a%2==0){
        if(__gcd(a,a+1)>1){
            cout<<a<<" "<<a+1<<endl;return;
        }else{
            cout<<a<<" "<<a+2<<endl;return;
        }
    }else{
        if(__gcd(a,a+1)>1){
            cout<<a<<" "<<a+1<<endl;return;
        }
        else if(__gcd(a,a+2)>1){
            if(a+2>b){
                cout<<-1<<endl;return;
            }
            cout<<a<<" "<<a+2<<endl;return;
        }
        else if(__gcd(a,a+3)>1){
            if(a+3>b){
                cout<<-1<<endl;return;
            }
            cout<<a<<" "<<a+3<<endl;return;
        }
        else if(__gcd(a+1,a+2)>1){
            if(a+2>b){
                cout<<-1<<endl;return;
            }
            cout<<a+1<<" "<<a+2<<endl;return;
        }
        else if(__gcd(a+1,a+3)>1){
            if(a+3>b){
                cout<<-1<<endl;return;
            }
            cout<<a+1<<" "<<a+3<<endl;return;
        }
    }
    
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}