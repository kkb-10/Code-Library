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
#define INF 99999999

map <ll,ll> primeFactors(ll n)  
{
	map <ll,ll> m;
	while (n % 2 == 0)  
	{  
		m[2]++;
		n = n/2;  
	}  
	for (int i = 3; i <= sqrt(n); i = i + 2)  
	{
		while (n % i == 0)  
		{  
			m[i]++;
			n = n/i;  
		}  
	}  
	if (n > 2)  
		m[n]++;
	return m;
}  
int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,q,i,j,a,b,c,d,x,k,m,r,w,l,p;
	cin>>t;
	//t=1;
	while(t--)
	{
		cin>>p>>q;
		if(p%q!=0)
		{
			cout<<p<<endl;
		}
		else 
		{
			map <ll,ll> m=primeFactors(q);
			ll ans=1e18+5;
			for(auto it:m)
			{
				ll temp=p;
				ll cnt=0;
				while(temp%it.first==0)
				{
					cnt++;
					temp/=it.first;
				}
				ans=min(ans,power(it.first,cnt-it.second+1));
				//cout<<ans<<" ";
			}
			cout<<p/ans<<endl;
		}
		
	}
	return 0;
}