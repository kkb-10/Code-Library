#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define ff first
#define ss second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
int mod=1e9+7;
#define elif else if
#define INF 1e18+7
int ceil(int a,int b){return (a+b-1)/b;}
int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
	int t,n,i,p,k,q;
	cin>>t;
	//t=1;
	while(t--)
	{
		cin>>n;
		vector <int> c,a,b,dp(n+1,0);
		rep(i,0,n)
		{
			cin>>p;
			c.pb(p);
		}
		rep(i,0,n)
		{
			cin>>p;
			a.pb(p);
		}
		rep(i,0,n)
		{
			cin>>p;
			b.pb(p);
		}
		dp[0]=abs(b[1]-a[1])+1;
		int ans=0;
		rep(i,1,n)
		{
			int betw=abs(a[i]-b[i])-1;
			if(a[i]==b[i])
			{
				dp[i]=c[i]+1;
			}
			else
			{
				dp[i]=max(c[i]+dp[i-1]-betw , c[i]+ 2 + betw );
			}
			ans=max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
