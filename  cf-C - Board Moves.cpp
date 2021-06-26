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
    ll t,n,m,a,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=0;
        ll k=n/2;
        while(n-2>=1)
        {
            ans+=((n*2)+((n-2)*2))*k;
            //cout<<ans<<" ";
            k--;
            n-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}