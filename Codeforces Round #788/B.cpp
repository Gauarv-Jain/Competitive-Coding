#include <bits/stdc++.h>
using namespace std;
//#define int long long

bool check(char vc[], char c, int k){

    for(int i=0; i<k; i++){
        if(vc[i]==c){
            return true;
        }
    }
    return false;

}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int k; cin>>k;
    char arr[k];
    for(int i=0; i<k; i++){
        cin>>arr[i];
    }

    vector<int> index ;
    for(int i=0; i<n; i++){
        if(check(arr,s[i],k)){
            index.push_back(i);
        }
    }

    if(index.size()==0){
        cout<<0<<endl; return;
    }
    if(index.size()==1){
        cout<<index[0]<<endl; return;
    }

    vector<int> tocheck;
    tocheck.push_back(index[0]);
    for(int i=1; i<index.size(); i++){
        tocheck.push_back(index[i]-index[i-1]-1);
    }

    sort(tocheck.begin(),tocheck.end());
    cout<< tocheck[(tocheck.size()-1)] + 1 <<endl; return;
    
}



int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}