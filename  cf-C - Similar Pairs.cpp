#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,a,b,i,j;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <ll> v;
        ll vis[200];
        memset(vis,0,sizeof(vis));
        ll e=0,o=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            vis[a]=1;
            v.pb(a);
            if(a%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        sort(v.begin(),v.end());
        if(e%2==0 && o%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            ll f=0;
            for(auto it:v)
            {
                if(vis[it-1]||vis[it+1])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
        
    }
    return 0;
}