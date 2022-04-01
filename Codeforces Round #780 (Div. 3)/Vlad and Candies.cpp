#include <bits/stdc++.h>
using namespace std;
//#define int long long

void fun(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    if(v.size()==1){
        if(v[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return;
    }

    sort(v.begin(), v.end());

    if( ( v[v.size()-1] - v[v.size()-2] ) > 1 ){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    return;
}


int32_t main(){

    int t;
    cin>>t;
    while(t--){
        fun();
    }

}