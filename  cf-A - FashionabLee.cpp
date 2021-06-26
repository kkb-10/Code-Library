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
	ll t,n,m,i,k,q,x1,x2,x3,y1,y2,y3;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%4==0)
		{
			cout<<"YES\n";
		}		
		else
		{
			cout<<"NO\n";
		}
		
	}
	return 0;
}
