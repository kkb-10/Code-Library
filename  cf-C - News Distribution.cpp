#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
ll arr[500005];
ll size[500005];

void initialize(ll n)
{
    for(ll i=0;i<=n;i++)
    {
        arr[i]=i;
        size[i]=1;
    }
}

ll root(ll i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}

void unionf(ll a,ll b)
{
    ll roota=root(a);
    ll rootb=root(b);
    if(roota!=rootb)
    {
        if( size[roota] < size[rootb] )
        {
            arr[roota]=rootb;
            size[rootb]+=size[roota];
        }
        else
        {
            arr[rootb]=roota;
            size[roota]+=size[rootb];
        }
    }  
}

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll n,m,t,i,a,b;
    cin>>n>>m;
    initialize(n);
    while(m--)
    {
        cin>>t;
        if(t!=0)
        {
            cin>>a;
            t--;
            for(i=0;i<t;i++)
            {
                cin>>b;
                unionf(a,b);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        ll roota=root(i);
        cout<<size[roota]<<" ";
    }
    return 0;
}