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
        cin>>n>>k;
        vector <ll> v1,v2;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v1.pb(a);
        }
        for(i=0;i<n;i++)
        {
            cin>>a;
            v2.pb(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int cnt=0;
        auto it2=v2.end();
        ll ans=accumulate(v1.begin(),v1.end(),0);
        it2--;
        for(auto it1:v1)
        {
            if(it1<*it2 && cnt<k)
            {
                ans+=*it2;
                ans-=it1;
                cnt++;
                //cout<<it1<<" "<<*it2<<" "<<ans<<endl;
            }
            else
            {
                break;
            }
            it2--;
        }
        cout<<ans<<endl;
    }
    return 0;
}