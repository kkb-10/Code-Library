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
        cin>>n;
        vector <ll> v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        set <ll> s;
        for(i=0;i<n-1;i++)
        {
            s.insert(abs(v[i]-v[i+1]));
        }
        auto it=s.begin();
        cout<<*it<<endl;
    }
    return 0;
}