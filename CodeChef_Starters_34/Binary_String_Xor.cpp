#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int c0=0, c1=0;
    vector<int> v;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            v.push_back(i);
            c1++;
        }else{
            c0++;
        }
    }

    //check if 1 possibele
    if(c1>=k){
        if(k==c1){
            cout<<"YES"<<endl;return;
        }else if( (c1-k)%2 == 0 ){
            cout<<"YES"<<endl;return;
        }
    }

    //only 0 possibele
    if(c1%2 == 1){
        cout<<"NO"<<endl;return;
    }

    
    int count = 0;

    if(v.size()==0){
        count = n;
    }else{
        if(v[0]!=0){
            count = v[0];
        }

        for(int i=1; i<v.size(); i++){

            if(i%2==1){
                count++;
            }else{
                if(v[i]-v[i-1] != 1){
                    count += v[i] - v[i-1] - 1; 
                }
            }   
        }
        if(v[v.size()-1] != s.size()-1){
            count += s.size()-1 - v[v.size()-1] ;
        }
    }

    

    //cout<<count<<endl;
    if(count>=k){
        cout<<"YES"<<endl;return;
    }else{
        cout<<"NO"<<endl;return;
    }
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}