#include <bits/stdc++.h>
using namespace std;
//#define int long long

int fun(int n){
    int count=0;
    while(n>0){
        count = count + (n%10) ;
        n = n/10;
    }
    return count;
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = fun(n);
        //cout << sum << endl;

        n++; 
        int sum2 = fun(n);
        if(sum2%2 == sum%2){
            cout<< n+1<<endl;
        }else{
            cout<<n<<endl;
        }
    }

}