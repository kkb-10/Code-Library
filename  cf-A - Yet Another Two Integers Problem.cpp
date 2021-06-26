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
	ll t,n,i,j,a,b,m,k;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ll diff=abs(a-b);
		ll ans=0;
		if(diff%10==0)
		{
			cout<<diff/10<<endl;
		}
		else
		{
			cout<<(diff/10)+1<<endl;
		}
		
	}
	return 0;
}