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
        cin>>a>>b;
        ll mini=min(a,b);
        ll maxi=max(a,b);
        if(2*mini>maxi)
        {
            cout<<(2*mini)*(2*mini)<<endl;
        }
        else
        {
            cout<<maxi*maxi<<endl;
        }
        
    }
    return 0;
}