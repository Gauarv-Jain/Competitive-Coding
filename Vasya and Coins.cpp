#include <bits/stdc++.h>
using namespace std;
//#define int long long

    void fun(int a, int b){

        if(a==0){
            cout<<1<<endl;
            return;
        }
        if(b==0){
            if(a!=0){
                cout<<a+1<<endl;
                return;
            }
        }

        if(a&1){
            cout<< ( 2*( (a/2) + b) ) + 2 <<endl;
            return;
        }else{
            cout<< ( 2*( (a/2) + b) ) + 1 <<endl;
            return;
        }
    }

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        fun(a,b);
    }

}

