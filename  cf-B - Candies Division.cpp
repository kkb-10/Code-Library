#include <bits/stdc++.h>
#include<string.h>
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
    ll t,i,n,h,mini,a,b,k,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=0;
        ans+=(n/k)*k;
        //cout<<(n-(n/k)*k)<<" "<<k<<endl;
        b=k;
        b/=2;
        if( (n-(n/k)*k)<=b)
        {
            ans+=(n-(n/k)*k);
        }
        else
        {
            //cout<<ans<<" "<<k<<endl;
            ans+=b;
        }
        cout<<ans<<endl;
    }
    return 0;
}