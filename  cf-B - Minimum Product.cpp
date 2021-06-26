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
		cin>>a>>b>>x>>y>>n;
		//n=min(n,max(a,b)+min(a,b));
		//cout<<n<<" ";
		ll mini=1e18;
		if(a-n>=x)
		{
			mini=min(mini,(a-n)*b);
			//cout<<"1 "<<mini<<endl;
		}
		if(b-n>=y)
		{
			mini=min(mini,(b-n)*a);
			//cout<<"2 "<<mini<<endl;
		}
		if(a-n<x)
		{
			ll pehla=x*max(y,(b-(n-(a-x))));
			mini=min(mini,pehla);
			//cout<<"3 "<<mini<<endl;
		}
		if(b-n<y)
		{
			ll pehla=y*max(x,(a-(n-(b-y))));
			mini=min(mini,pehla);
			//cout<<"4 "<<mini<<endl;
		}
		cout<<mini<<endl;
	}
	return 0;
}