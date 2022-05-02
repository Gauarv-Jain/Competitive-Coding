#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int n; cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"YES"<<endl; return;
    }

    bool increasing = false;
    int q = 0;
    while(q<n){
        if(arr[q] == 0){
            increasing = true;
            break;
        }else if(arr[q] == 3){
            increasing = false;
            break;
        }
        q++;
    }

    for(int i=q; i<n-2; i++){

        if(arr[i]==0){
            if(increasing){
                if(arr[i+1]==0){
                    increasing = true;
                    continue;
                }
                else if(arr[i+1]==3 || arr[i+2]==0){
                    cout<<"NO"<<endl; return;
                }else{
                    increasing = true;
                    continue;
                }
            }else{
                cout<<"NO"<<endl; return;
            }
            
        }
        
        else if(arr[i]==3){
            if(!(increasing)){
                if(arr[i+1]==3){
                    increasing = false;
                    continue;
                }
                else if(arr[i+1]==0 || arr[i+2]==3){
                    cout<<"NO"<<endl; return;
                }else{
                    increasing = false;
                    continue;
                }
            }else{
                cout<<"NO"<<endl; return;
            }
            
        }

        else{
            if(increasing){
                increasing = false;
            }else{
                increasing = true;
            }
        }
        
    }

    if(arr[n-2]==0){
        if(increasing){
            if(arr[n-1]==3){
                cout<<"NO"<<endl; return;
            }else{
                increasing = true;
                
            }
        }else{
            cout<<"NO"<<endl; return;
        }
    }else if(arr[n-2]==3){
        if(!(increasing)){
            if(arr[n-1]==0){
                cout<<"NO"<<endl; return;
            }else{
                increasing = false;
                
            }
        }else{
            cout<<"NO"<<endl; return;
        }
    }else{
        if(increasing){
            increasing = false;
            
        }else{
            increasing = true;
            
        }
    }


    if(arr[n-1]==0){
        if(increasing){

        }else{
            cout<<"NO"<<endl; return;
        }
    }else if(arr[n-1]==3){
        if(increasing){
            cout<<"NO"<<endl; return;
        }
    }
    
    cout<<"YES"<<endl; return;
    // int sm = 0;
    // int la = 2;

    // for(int i=1; i<n; i++){
        
    //     if(arr[i]==2 || arr[i]==3){
    //         sm--;
    //     }else{
    //         la++;
    //     }
         
    // }


    // int check = la-sm+1;
    // if(check == n+2){
    //     cout<<"YES"<<endl; return;
    // }
    // else{
    //     cout<<"NO"<<endl; return;
    // }
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}