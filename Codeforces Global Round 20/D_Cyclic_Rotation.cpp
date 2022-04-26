#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    int a1[n]; 
    int a2[n]; 
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        cin>>a2[i];
    }

    int i=n-1, j=n-1;
    multiset<int> s;

    if(a1[i]!=a2[j]){
        cout<<"NO"<<endl; return;
    }

    while(i>-1 && j>-1){

        if(a1[i]==a2[j]){
            i--; j--;
        }
        
        else{
            if(a2[j]==a2[j+1]){
                s.insert(a2[j]);
                j--; 
            }else if( s.find(a1[i]) != s.end() ){
                s.erase(s.find(a1[i]));
                i--;
            }else{
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