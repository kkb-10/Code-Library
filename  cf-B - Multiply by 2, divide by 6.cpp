#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,m,i,s,k,q,j,x,y; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll f=0;
		ll ans=0;
		while(n!=1)
		{
			if(n%6==0)
			{
				n/=6;
				ans++;
				f=0;
			}
			else
			{
				if(f==0)
				{
					f=1;
					ans++;
					n*=2;
				}
				else
				{
					break;
				}
				
			}
		}
		if(f==1)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<ans<<endl;
		}
		
		
	}
	return 0;
}
