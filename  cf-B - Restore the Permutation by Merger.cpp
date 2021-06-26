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
	ll t,n,m,a,b,c,y,x,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map <ll,ll> m;
		vector <ll> v;
		for(i=0;i<2*n;i++)
		{
			cin>>a;
			v.pb(a);
			m[a]++;
		}
		for(auto &it:m)
		{
			it.second=it.second/2;
		}
		
		for(auto it:v)
		{
			if(m[it]!=0)
			{
				cout<<it<<" ";
				m[it]--;
			}
		}
		cout<<endl;
	}
	return 0;
}