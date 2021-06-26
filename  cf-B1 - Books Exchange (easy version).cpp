#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
vector <ll> v;

int main() 
{ 
    fastIO;
    ll i,n,t,ans,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<n;i++)
        {
            ll cnt=0;
            ll j=i;
            while(v[j]!=i+1)
            {
                j=v[j]-1;
                cnt++;
            }
            cout<<cnt+1<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}