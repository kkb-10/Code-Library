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
    ll t,n,i,j,k,q,a,b;
    unordered_map <ll,ll> m;
    m[1]=1;
    a=2;
    ll prev=0;
    ll pres=2;  
    ll beech=0;   
    ll ans=1;
    while(a<=1e18)
    {
        ans+=pres+beech*2+prev;
        m[a]=ans;
        beech=beech*2+prev;
        pres++;
        prev++;
        a*=2;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n>=1)
        {
            k=1;
            while(k<=n)
            {
                k*=2;
                if(k>n)
                {
                    k/=2;
                    break;
                }
            }
            ans+=m[k];
            //cout<<n<<endl;
            n=n-k;
        }
        cout<<ans<<endl;
    }
    return 0;
}