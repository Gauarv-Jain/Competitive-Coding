#include <bits/stdc++.h>
using namespace std;
//#define int long long

int min_subsegments(int a, int b, vector<int> v){
    int i=a;
    int toreturn  = 0;
    while(i<=b){
        if(v[i]==2){
            i += 2;
        }else{
            toreturn++;
            i++;
        }
    }

    if(v[a]==1){
        toreturn--;
    }
    if(v[b]==1){
        toreturn--;
    }
    if(toreturn<=0){
        if(a==0 && b==v.size()-1){
            toreturn = 1;
        }else{
            toreturn = 0;
        }
        
    }
    return toreturn;
}

void solve(){
    int n; cin>>n;
    string s;cin >> s;
    int tempcount = 1;
    vector<int> v;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            tempcount++;
        }else{
            v.push_back(tempcount);
            tempcount = 1;
        }
    }
    v.push_back(tempcount);
    
    vector<int> odd;
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==1){
            odd.push_back(i);
        }
    }

    int ans = 0;
    int min_subseg = 0;

    if(odd.size() != 0 ){
        min_subseg = odd[0];
    }
    
    for(int i=0; i<odd.size(); i+=2){

        if(i!=0){
            min_subseg += odd[i] - odd[i-1] - 1;
        }

        min_subseg += min_subsegments(odd[i], odd[i+1], v);
        ans += (odd[i+1]-odd[i]);
    }

    if(odd.size() != 0 ){
        min_subseg += (v.size() - odd[odd.size()-1] - 1);
    }
    

    if(odd.size()==0){
        min_subseg = v.size();
    }

    if(min_subseg==0){
        min_subseg = 1;
    }

    cout << ans <<" "<< min_subseg << endl; return ;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}