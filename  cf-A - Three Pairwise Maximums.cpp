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
		vector <ll> v(3);
		cin>>v[0]>>v[1]>>v[2];
		sort(all(v));
		if(v[1]==v[2] && v[0]==v[1])
		{
			cout<<"YES\n";
			cout<<v[2]<<" "<<v[0]<<" "<<v[0]<<endl;
		}
		else if(v[0]==v[1] || (v[0]!=v[1] && v[1]!=v[2]))
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<v[2]<<" "<<v[0]<<" "<<v[0]<<endl;
		}
		
		
	}
	return 0;
}