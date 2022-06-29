#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int nev=0, pos=0, zero=0;
    for(int i=0; i<n; i++){
        if(v[i]<0){
            nev++;
        }else if(v[i]>0){
            pos++;
        }else{
            zero++;
        }
    }
    if(nev>2 || pos>2){
        cout<<"NO"<<endl;
        return;
    }
    if(v[0]<0 && v[1]<0 && v[2]==0){ 
        cout<<"NO"<<endl;
        return;
    }
    if(v[v.size()-1]>0 && v[v.size()-2]>0 && v[v.size()-3]==0){
        cout<<"NO"<<endl;
        return;
    }

    unordered_set<int> set;
    for(auto it : v) {
        set.insert(it);
    }



    if(nev==1 && pos==1 && zero>0){
        int temp = v[0] + v[v.size()-1];
        if(set.find(temp)==set.end()){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            return;
        }
    }
    if(nev==1 && pos==0){
        cout<<"YES"<<endl;
        return;
    }
    if(nev==0 && pos==1){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for (int k = j+1; k < n; k++){
                int temp = v[i] + v[j] + v[k];
                if(set.find(temp)==set.end()){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            
        }
    }
    cout<<"YES"<<endl;
    return;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}