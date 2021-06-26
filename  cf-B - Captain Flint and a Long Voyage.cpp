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
		ll cnt=ceil(n/4.0);
		for(i=0;i<n-cnt;i++)
		{
			cout<<"9";
		}
		for(;i<n;i++)
		{
			cout<<"8";
		}
		cout<<endl;
		
	}
	return 0;
}