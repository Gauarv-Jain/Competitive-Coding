#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solver(){
    int n, m; cin>>n>>m; 
    string s, a; cin>>s>>a; 
    int i =0, j=0;
    char c;

    


    while (i<n && j<m){

        if(a[j]=='a'){
            c='b';
        }else{
            c='a';
        }

        if(s[i]=='?'){
            s[i] = c;
            i++;
            continue;
        } 

        if(s[i]==a[j]){
            i++; j++;
        }else{
            i++;
        }

       
    }
    if(j==m){
        cout<<-1<<endl;
        return;
    }else{
        cout<<s<<endl;
        return;
    }
    
}

int32_t main(){

    int t; cin>>t; 
    while(t--){
        solver();
    }

}