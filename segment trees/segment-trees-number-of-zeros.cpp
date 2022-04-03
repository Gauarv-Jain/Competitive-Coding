// #include <bits/stdc++.h>
// using namespace std;
// //#define int long long

// int productrange(int tree[], int index, int s, int e, int qs, int qe, int la[]){

//     if(la[index] != 0){
        
//     }

//     if (qs>e || qe<s){
//         return 1;
//     }
//     if(qs<=s && qe>=e){
//         return tree[index];
//     }

//     int mid = (s+e)/2;
//     int left = productrange(tree, index*2, s, mid, qs, qe, la);
//     int right = productrange(tree, index*2 + 1, mid+1, e, qs, qe, la);
//     return (left * right);
// }

// void updaterange(int tree[], int index, int s, int e, int qs, int qe, int la[], int v){

//     if (qs>e || qe<s){
//         return;
//     }

//     if(qs<=s && qe>=e){
//         la[index] = v;
//         return;
//     }

//     // if(s==e){
//     //     tree[index]=v;
//     //     return;
//     // }

//     int mid = (s+e)/2;
//     updaterange(tree, index*2, s, mid, qs, qe, la, v);
//     updaterange(tree, index*2 + 1, mid+1, e, qs, qe, la, v);
//     tree[index] = tree[index*2] * tree[index*2 + 1];
//     return;

// }

// void build(int arr[], int tree[], int index, int s, int e){

//     if(s==e){
//         tree[index]=arr[s];
//         return;
//     }

//     int mid = (s+e)/2;
//     build(arr, tree, index*2, s, mid);
//     build(arr, tree, index*2 + 1, mid+1, e);
//     tree[index] = tree[index*2] * tree[index*2 + 1] ;

// }

// int32_t main(){

//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }

//     int tree[4*n+1];
//     int laz[4*n+1];
//     memset(laz, 0, sizeof(laz));
//     build(array, tree, 1, 0, n-1);


//     // cout<<endl<<endl<<endl;
//     // cout<<"FIRST BUILD"<<endl;
//     // for (int i = 1; i < 10; i++)
//     // {
//     //     cout<<tree[i]<< "  ";
//     // }
//     // cout<<endl;
    

//     int q; cin>>q;
//     while(q--){
//         int temp; cin>>temp;
//         if(temp==1){
//             int qs, qe, count=0;
//             cin>>qs>>qe;
//             int t2 = productrange(tree, 1, 1, n, qs, qe, laz);
//             //cout<<t2<<endl;
//             if(t2==0){
//                 cout<<1<<endl;
//             }else{
//                 while (t2%10 == 0 && t2>0)  
//                 {
//                     count++;
//                     t2 = t2/10;
//                 }
//                 cout<<count<<endl;
//             }
                      
//         }else{
//             int qs, qe, v;
//             cin>>qs>>qe>>v;
//             updaterange(tree, 1, 1, n, qs, qe, laz, v);
            
//             // cout<<endl<<endl<<endl;
//             // cout<<"SECOND   BUILD"<<endl;
//             // for (int i = 1; i < 10; i++)
//             // {
//             //     cout<<tree[i]<< "  ";
//             // }
//             // cout<<endl;
//         }
//     }

// }


#include<bits/stdc++.h>
using namespace std;
struct tree
{
    int c2;
    int c5;
    int c0;
    int lazy;
};
tree st[400005];
int a[100005];
void construct(int s,int e,int i)
{
    if(s==e)
    {
        int x=a[s];
        st[i].lazy=-1;
        st[i].c2=0;
        st[i].c5=0;
        if(a[s]==0)
            st[i].c0=1;
            else
                st[i].c0=0;
        while(x%5==0&&x)
        {
           x=x/5;
           st[i].c5++;
        }
        while(x%2==0&&x)
        {
           x=x/2;
           st[i].c2++;
        }
        return;
    }
    int mid=(s+e)/2;
    construct(s,mid,2*i);
    construct(mid+1,e,2*i+1);
    st[i].lazy=-1;
    st[i].c2=st[2*i].c2+st[2*i+1].c2;
    st[i].c5=st[2*i].c5+st[2*i+1].c5;
    st[i].c0=st[2*i].c0+st[2*i+1].c0;
}
void update(int s,int e,int l,int r,int val,int i)
{
    if(st[i].lazy!=-1)
    {
        int x=st[i].lazy;
        int t=0,f=0;
        while(x%2==0&&x)
        {
            x=x/2;
            t++;
        }
        while(x%5==0&&x)
        {
            x=x/5;
            f++;
        }
        st[i].c2=(e-s+1)*t;
        st[i].c5=(e-s+1)*f;
        st[i].c0=(e-s+1)*(st[i].lazy==0);
        if(s!=e)
        {
            st[2*i].lazy=st[i].lazy;
            st[2*i+1].lazy=st[i].lazy;
        }
        st[i].lazy=-1;
    }
    if(e<l||s>r)
        return;
    if(s>=l&&e<=r)
    {
       int x=val;
        int t=0,f=0;
        while(x%2==0&&x)
        {
            x=x/2;
            t++;
        }
        while(x%5==0&&x)
        {
            x=x/5;
            f++;
        }
        st[i].c2=(e-s+1)*t;
        st[i].c5=(e-s+1)*f;
        st[i].c0=(e-s+1)*(val==0);
        if(s!=e)
        {
            st[2*i].lazy=val;
            st[2*i+1].lazy=val;
        }
        return;
    }
    int mid=(s+e)/2;
    update(s,mid,l,r,val,2*i);
    update(mid+1,e,l,r,val,2*i+1);
    st[i].c2=st[2*i].c2+st[2*i+1].c2;
    st[i].c5=st[2*i].c5+st[2*i+1].c5;
    st[i].c0=st[2*i].c0+st[2*i+1].c0;
}
tree query(int s,int e,int l,int r,int i)
{
    if(st[i].lazy!=-1)
    {
        int x=st[i].lazy;
        int t=0,f=0;
        while(x%2==0&&x)
        {
            x=x/2;
            t++;
        }
        while(x%5==0&&x)
        {
            x=x/5;
            f++;
        }
        st[i].c2=(e-s+1)*t;
        st[i].c5=(e-s+1)*f;
        st[i].c0=(e-s+1)*(st[i].lazy==0);
        if(s!=e)
        {
            st[2*i].lazy=st[i].lazy;
            st[2*i+1].lazy=st[i].lazy;
        }
        st[i].lazy=-1;
    }
    if(e<l||s>r)
    {
        tree temp;
        temp.c2=0;
        temp.c5=0;
        temp.c0=0;
        return temp;
    }
    if(s>=l&&e<=r)
    {
        return st[i];
    }
    int mid=(s+e)/2;
    tree temp,le,ri;
    le=query(s,mid,l,r,2*i);
    ri=query(mid+1,e,l,r,2*i+1);
    temp.c2=le.c2+ri.c2;
    temp.c5=le.c5+ri.c5;
    temp.c0=le.c0+ri.c0;
    return temp;
}
int main()
{
    //freopen("input49.txt","r",stdin);
    //freopen("output49.txt","w",stdout);
    int n,i,j,v,l,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    construct(1,n,1);
    cin>>q;
    while(q--)
    {
        scanf("%d",&l);
        if(l)
        {
            scanf("%d %d",&i,&j);
            tree temp;
            temp=query(1,n,i,j,1);
            if(temp.c0)
                printf("%d\n",1);
            else
                printf("%d\n",min(temp.c2,temp.c5));
        }
        else
        {
            scanf("%d %d %d",&i,&j,&v);
            update(1,n,i,j,v,1);
        }
    }
    return 0;
}