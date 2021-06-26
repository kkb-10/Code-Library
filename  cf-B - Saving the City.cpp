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
		cin>>a>>b;
		string s;
		cin>>s;
		ll f=0;
		ll pehla=0;
		ll segments=0;
		vector <ll> v;
		ll zeros=0;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
				pehla=1;
				if(f==0)
				{
					f=1;
					if(zeros!=0)
					{
						v.pb(zeros);
					}
					zeros=0;
					segments++;
				}
			}
			else
			{
				f=0;
				if(pehla==1)
				{
					zeros++;
				}
			}
		}
		sort(all(v));
		ll ans=segments*a;
		ll p=ans;
		for(auto it:v)
		{
			
			p=p-a+it*b;
			ans=min(ans,p);
		}
		cout<<ans<<endl;
	}
	return 0;
}