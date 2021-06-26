#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fi first
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,i,j,a,b,m,k,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
		ll diff=y-x;
		//cout<<diff<<endl;
		ll cnt=0;
		ll p=n-1;
		while(diff%p!=0)
		{
			cnt++;
			p--;
		}
		//cout<<p<<endl;
		ll tukda=diff/p;
		ll elem_bet=p-1;
		ll req=n-2-elem_bet;
		ll l=x,r=y;
		while(l-tukda>0 && req>0)
		{
			l-=tukda;
			req--;
		}
		while(n--)
		{
			cout<<l<<" ";
			l+=tukda;
		}
		cout<<endl;
	}
	return 0;
}