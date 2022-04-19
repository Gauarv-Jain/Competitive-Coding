#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int actualans = LLONG_MAX;
    
    for(int i=0; i<n; i++){

        int ans = 0;
        int left = i-1;
        int checr = 0;
        while(left>-1){

            if( arr[left]>abs(checr) ){
                ans += 1;
                checr = arr[left];
                left--;
            }else{
                int mul = checr/arr[left];
                mul++;
                ans += mul;
                checr = arr[left]*mul;
                left--;
            }
        }

        //ans--;

        int right = i+1;
        checr = 0;
        while(right<n){
            if( arr[right]>abs(checr) ){
                ans += 1;
                checr = arr[right];
                right++;
            }else{
                int mul = checr/arr[right];
                mul++;
                ans += mul;
                checr = arr[right]*mul;
                right++;
            }
        }
        //ans--;

        actualans = min(ans,actualans);
        
    }

    cout << actualans << endl;return ;  
}

int32_t main(){

    solve();

}