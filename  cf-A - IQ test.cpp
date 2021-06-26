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
bool vis[105][105];

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
		cin>>n;
		map<ll,ll> m;
		vector <ll> v;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.pb(a);
			m[a%2]++;
		}
		ll ind;
		if(m[0]==1)
		{
			for(i=0;i<n;i++)
			{
				if(v[i]%2==0)
				{
					ind=i;
					break;
				}
			}
			cout<<ind+1<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(v[i]%2!=0)
				{
					ind=i;
					break;
				}
			}
			cout<<ind+1<<endl;
		}
		

	// }
	return 0;
}