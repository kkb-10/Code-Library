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
		cin>>x>>y>>n;
		ll p=n/x;
		p=p*x;
		if(p==0)
			cout<<y<<endl;
		else
		{
			if(p+y<=n)
				cout<<p+y<<endl;
			else
			{
				cout<<p-(x-y)<<endl;
			}
			
		}

		
	}
	return 0;
}
