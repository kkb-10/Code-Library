#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
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
#define mod 1000000007
#define elif else if

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	int t,n,i,j,a,c,d,k,q,l,r,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		int e=0;
		int o=0;
		rep(i,0,n)
		{
			if((i+1)%2==0 && (s[i]-'0')%2==0)
			{
				e=1;
			}
			else if((i+1)%2!=0 && (s[i]-'0')%2!=0)
			{
				o=1;
			}
		}
		//cout<<e<<" "<<o<<endl;
		if(n%2==0)
		{
			if(e==1) cout<<"2\n";
			else cout<<"1\n";
		}
		else
		{
			if(o==1) cout<<"1\n";
			else cout<<"2\n";
		}
		
	}
	return 0;
}