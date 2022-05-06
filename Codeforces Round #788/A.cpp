#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    int contneg = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            contneg++;
        }
    }

    if(n==1){
        cout<<"YES"<<endl; return ;
    }

    bool notsame = true;
    for(int i=0; i<n-1; i++){
        if(abs(arr[i])==abs(arr[i+1])){
            
        }else{
            notsame = false;
        }
    }

    if(notsame){
        cout<<"YES"<<endl; return ;
    }

    bool ok = false;
    int index = -1;
    for(int i=0; i<n-1; i++){
        if( abs(arr[i]) < abs(arr[i+1]) ){
            index = i;
            break;
        }
    }

    if( index != -1 ){
        for(int i=index+1; i<n-1; i++){
            if( abs(arr[i]) > abs(arr[i+1]) ){
                cout<<"NO"<<endl; return ;
            }
        }
    }
    

    // cout<<"YES"<<endl; return ;


    int samecount = 0;
    if(index == -1){

        for(int i=n-2; i<=0; i--){
            if(abs(arr[i])==abs(arr[n-1])){
                samecount++;
            }else{
                break;
            }
        }
        samecount++;
        if(arr[n-1]==0){
            if(contneg==(n-samecount)){
                cout<<"YES"<<endl; return ;
            }else{
            cout<<"NO"<<endl; return ;
            }
        }else{
            if(  contneg>=(n-samecount)  &&  contneg<=n){
                cout<<"YES"<<endl; return ;
            }else{
                cout<<"NO"<<endl; return ;
            }
        }

        

    }
    if(index == 0){
        if(contneg>1){
            cout<<"NO"<<endl; return ;
        }else{
            cout<<"YES"<<endl; return ;
        }
    }

    if(index != 0){

        for(int i=index-1; i<=0; i--){
            if(abs(arr[i])==abs(arr[index])){
                samecount++;
            }else{
                break;
            }
        }

    }

    int number_of_neg = index - samecount;

    if(arr[index]==0){

        if(contneg==number_of_neg){
            cout<<"YES"<<endl; return ;
        }else{
            cout<<"NO"<<endl; return ;
        }

    }
    else{
        if(contneg>=number_of_neg && contneg<=(index+1)){
            cout<<"YES"<<endl; return ;
        }else{
            cout<<"NO"<<endl; return ;
        }
    }
    
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}