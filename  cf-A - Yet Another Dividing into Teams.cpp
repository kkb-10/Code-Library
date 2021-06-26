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
        sort(v.begin(),v.end());
        ll f=0;
        for(i=1;i<n;i++)
        {
            if(abs(v[i]-v[i-1])==1)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
        v.clear();
    }
    return 0;
}