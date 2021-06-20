#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define ff first
#define ss second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int ceil(int a,int b){return (a+b-1)/b;}
int gcd(int a,int b){if(b==0) return a;return gcd(b,a%b);}
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
int mod=1e9+7;
#define elif else if
#define INF 1e18+7
int cnt[300005];
int val[300005];
int lvl[300005];

bool cmp(pair<int,int> &a, pair<int,int> &b)
{
    return a.ff > b.ff;
}
void calcsize(vector <int> adj[],int root,int parent)
{
    cnt[root]=1;
    vector <pair<int,int>> v;
    for(auto it:adj[root])
    {
        if(it==parent) continue;
        calcsize(adj,it,root);
    }
    int i=1;
    for(auto it:adj[root])
    {
        if(it!=parent)
        {
            v.pb({cnt[it],it});
        }
    }
    sort(all(v),cmp);
    for(auto it:v)
    {
        cnt[it.ss]=cnt[it.ss]* (i++);
        cnt[root]= cnt[root] + cnt[it.ss];
    }

}

int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,k,a,b,c,q,p,j,l,r,mm;
    cin>>t;
	//t=1;
    while(t--)
    {
        cin>>n>>k;
        vector <int> adj[n+5];
        int vis[n+5];
        memset(vis,false,sizeof(vis));
        rep(i,0,n-1)
        {
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        memset(lvl,0,sizeof(lvl));
        calcsize(adj,1,-1);
        
        cout<<(cnt[1]%mod * k%mod) %mod<<endl;
    }
    return 0;
}