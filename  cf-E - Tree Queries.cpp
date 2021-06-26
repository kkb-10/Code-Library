#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
bool vis[200005];
ll parent[200005];
ll in[200005];
ll out[200005];
ll timer=1;
void dfs(ll src,vector<ll> v[])
{
    vis[src]=true;
    in[src]=timer++;
    for(auto it:v[src])
    {
        if(!vis[it])
        {
            parent[it]=src;
            dfs(it,v);
        }
    }
    out[src]=timer++;
}
int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,i,j,k,q,a,b;
    // cin>>t;
    // while(t--)
    // {
        cin>>n>>q;
        vector<ll> v[n+5];
        vector <ll> adj[n+5];
        for(i=0;i<n-1;i++)
        {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        memset(parent,-1,sizeof(parent));
        memset(vis,false,sizeof(vis));
        dfs(1,v);
        parent[1]=1;
        while(q--)
        {
            cin>>k;
            vector <ll> vert;
            ll maxi=-1;
            ll vt=0;
            for(i=0;i<k;i++)
            {
                cin>>a;
                vert.pb(parent[a]);
                if(in[parent[a]]>maxi)
                {
                    maxi=in[parent[a]];
                    vt=a;
                }
            }
            a=vt;
            ll f=0;
            for(auto it:vert)
            {
                if(in[it]<=in[a] && out[it]>=out[a])
                {
                    b=10;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(f==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    // }
    return 0;
}