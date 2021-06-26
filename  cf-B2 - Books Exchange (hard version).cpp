#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

vector <ll> v1[200007],v2[200007],rev;
bool vis1[200007],vis2[200007];
ll cnt,arr[200007];

void dfs(ll src)
{
    vis1[src]=true;
    for(auto &i:v1[src])
    {
        if(!vis1[i])
        {
            dfs(i);
            vis1[i]=true;
        }
        v1[src].clear();
    }
    rev.pb(src);
}
void dfs1(ll src)
{
    vis2[src]=true;
    for(auto &i:v2[src])
    {
        if(!vis2[i])
        {
            cnt++;
            dfs1(i);
            vis2[i]=true;
        }
        v2[src].clear();
    }
}

int main()
{
    fastIO;
    ll t,n,i,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v1[i+1].pb(a);
            v2[a].pb(i+1);
        }
        memset(vis1,false,sizeof(vis1));
        memset(vis2,false,sizeof(vis2));
        for(ll i=1;i<=n;i++)
        {
            if(!vis1[i])
            {
                dfs(i);
            }
        }
        reverse(rev.begin(),rev.end());
        for(ll i=0;i<n;i++)
        {
            if(!vis2[rev[i]])
            {
                cnt=1;
                dfs1(rev[i]);
            }
            arr[rev[i]]=cnt;
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}