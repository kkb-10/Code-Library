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
    ll t,n,m,a,b,i,j,k;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll ans=0;
        ans+=(floor(b/2))*a;
        if(b%2!=0)
        {
            ans+=(floor(a/2))+a%2;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}