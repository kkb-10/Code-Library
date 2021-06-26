#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)

ll mod=998244353;


int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,a,b,c,y,x,i,j,k,q,arr[105];
	// cin>>t;
	// while(t--)
	// {
		cin>>n>>k;
		vector <ll> v;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.pb(a);
		}
		map<ll,ll> m;
		ll p=n;
		ll ans1=0;
		ll ans2=1;
		for(i=0;i<k;i++)
		{
			m[p]=1;
			ans1+=p;
			p--;

		}
		ll f=0;
		ll prev=0;
		for(i=0;i<n;i++)
		{
			if(m[v[i]]==1)
			{
				if(f==0)
				{
					f=1;
					prev=i;
				}
				else
				{
					ans2=(ans2*(i-prev))%mod;
					prev=i;
				}
			}
			//cout<<v[i]<<" "<<ans2<<endl;
		}
		cout<<ans1<<" "<<ans2<<endl;
	// }
	return 0;
}