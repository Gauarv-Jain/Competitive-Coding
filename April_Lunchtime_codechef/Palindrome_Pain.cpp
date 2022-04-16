#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve(){
    int x,y; cin>>x>>y;

    if(x==1 || y==1){
        cout<<-1<<endl;return;
    }

    if(x%2==1 && y%2==1){
        cout<<-1<<endl;return;
    }

    if( (x+y)%2 == 0 ){

        string s1;

        for(int i=0; i<x/2; i++){
            s1 = s1+'a';
        }

        for(int i=0; i<y; i++){
            s1 = s1+'b';
        }

        for(int i=0; i<x/2; i++){
            s1 = s1+'a';
        }

        cout<<s1<<endl;

        string s2;

        for(int i=0; i<y/2; i++){
            s2 = s2+'b';
        }

        for(int i=0; i<x; i++){
            s2 = s2+'a';
        }

        for(int i=0; i<y/2; i++){
            s2 = s2+'b';
        }

        cout<<s2<<endl;
        return ;

        

    }else{
        if(x%2 == 0){

            //b is middle 
            string s1;

            for(int i=0; i<x/2; i++){
                s1 = s1+'a';
            }

            for(int i=0; i<y; i++){
                s1 = s1+'b';
            }

            for(int i=0; i<x/2; i++){
                s1 = s1+'a';
            }

            cout<<s1<<endl;

            string s2;

            for(int i=0; i<y/2; i++){
                s2 = s2+'b';
            }

            for(int i=0; i<x/2; i++){
                s2 = s2+'a';
            }

            s2 = s2 + 'b';

            for(int i=0; i<x/2; i++){
                s2 = s2+'a';
            }

            for(int i=0; i<y/2; i++){
                s2 = s2+'b';
            }

            cout<<s2<<endl;

            return ;

        }else{
            //a is middle
            string s1;

            for(int i=0; i<x/2; i++){
                s1 = s1+'a';
            }

            for(int i=0; i<y/2; i++){
                s1 = s1+'b';
            }

            s1 = s1+'a';

            for(int i=0; i<y/2; i++){
                s1 = s1+'b';
            }

            for(int i=0; i<x/2; i++){
                s1 = s1+'a';
            }

            cout<<s1<<endl;

            string s2;

            for(int i=0; i<y/2; i++){
                s2 = s2+'b';
            }

            for(int i=0; i<x; i++){
                s2 = s2+'a';
            }

            for(int i=0; i<y/2; i++){
                s2 = s2+'b';
            }

            cout<<s2<<endl;
            return ;
        }
    }
    
}

int32_t main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

}