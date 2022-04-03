#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node{
    int sum,lsum,rsum,maxsum;
};

node tree[4*50002 + 1];

void build(int arr[], int index, int s, int e){

    if(s==e){
        tree[index].sum = tree[index].lsum = tree[index].rsum = tree[index].maxsum = arr[s];
        return;
    }

    int mid = s + ((e-s)/2) ;
    build(arr, index*2, s, mid);
    build(arr, index*2 +1, mid+1, e);
    tree[index].sum = (tree[index*2].sum + tree[index*2 +1].sum);
    tree[index].lsum = max(tree[index*2].lsum, tree[index*2].sum + tree[index*2 + 1].lsum);
    tree[index].rsum = max(tree[index*2+1].rsum, tree[index*2+1].sum + tree[index*2].rsum);
    tree[index].maxsum = max( max( tree[index*2].maxsum, tree[index*2+1].maxsum),  (tree[index*2].rsum + tree[index*2+1].lsum));
    //tree[index].maxsum = max(tree[index].maxsum, (tree[index*2].rsum + tree[index*2+1].lsum) );
    return;
}

node query(int index, int qs, int qe, int s, int e){

    if(e<qs || qe<s){
        struct node toreturn;
        toreturn.sum=0;
        toreturn.maxsum=0;
        toreturn.rsum=0;
        toreturn.lsum=0;
        return toreturn;
    }

    if(qs<=s && qe>=e){
        return tree[index];
    }

    int mid = s + ((e-s)/2) ;

    if(qe<=mid){
       return query(index*2, qs, qe, s, mid);
    }
    if(qs>mid){
        return query(index*2+1, qs, qe, mid+1, e);
    }

    struct node temp1 = query(index*2, qs, qe, s, mid);
    struct node temp2 = query(index*2+1, qs, qe, mid+1, e);
    struct node toreturn;
    toreturn.sum = temp1.sum + temp2.sum;
    toreturn.lsum = max(temp1.lsum, temp1.sum+ temp2.lsum);
    toreturn.rsum = max(temp2.rsum, temp2.sum+ temp1.rsum);
    toreturn.maxsum = max(max(temp1.maxsum, temp2.maxsum), temp1.rsum+temp2.lsum);
    return toreturn; 

}

int32_t main(){
    int n; 
    cin>>n;
    int arr[n+1];
    arr[0]=-1;
    for(int i=1; i<n+1; i++){
        cin>>arr[i];
    }
    build(arr, 1, 1, n);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<tree[i].maxsum<<" ";
    // }
    // cout<<endl;
    
    int q;
    cin>>q;
    while(q--){
        int qs, qe;
        cin>>qs>>qe;
        struct node ans = query(1, qs, qe, 1, n);
        cout<<ans.maxsum<<endl;
    }
}