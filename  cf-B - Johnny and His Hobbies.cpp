#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,i,j,k,q,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        multiset <ll> v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.insert(a);
        }
        ll f=0;
        for(i=1;i<=1024;i++)
        {
            multiset <ll> v1;
            for(auto it:v)
            {
                v1.insert(it^i);
            }
            if(v1==v)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
        
        
    }
    return 0;
}
