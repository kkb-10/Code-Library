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
        ll cnt=1;
        vector <ll> v;
        while(n)
        {
            a=n%10;
            if(a*cnt!=0)
            v.pb(a*cnt);
            
            n/=10;
            cnt=cnt*10;
        }
        cout<<v.size()<<endl;
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}