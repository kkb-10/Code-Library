#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
ll power(ll x, unsigned ll y){ll res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if
#define INF 1e18+7


int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
	ll t,n,q,l,r,a,b,c,x,y,i,j,p,m,h,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		vector <ll> v,v1;
		rep(i,0,n)
		{
			cin>>a;
			v.pb(a);
		}
		ll f=0;
		rep(i,1,n)
		{
			if(v[i]<v[i-1])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"0\n";
		}
		else
		{
			ll  ans=0;
			for(i=0;i<n-1;i++)
			{
				if(v[i]>v[i+1])
				{
					for(j=0;j<=i;j++)
					{
						if(v[j]>x)
						{
							ll temp=x;
							x=v[j];
							v[j]=temp;
							ans++;
						}
					}
				}
			}
			f=0;
			rep(i,1,n)
			{
				if(v[i]<v[i-1])
				{
					f=1;
					break;
				}
			}
			if(f==1) cout<<"-1\n";
			else
			cout<<ans<<endl;

		}
		
	}
	return 0;
}