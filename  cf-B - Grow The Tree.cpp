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
    ll n,a,p;
    cin>>n;
    p=n/2;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    ll ans1=0,ans2=0;
    for(ll i=0;i<p;i++)
    {
        ans1+=v[i];
    }
    ans1*=ans1;
    for(ll i=p;i<n;i++)
    {
        ans2+=v[i];
    }
    ans2*=ans2;
    cout<<ans1+ans2<<endl;
    return 0;
} 