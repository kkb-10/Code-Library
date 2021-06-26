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
vector <ll> printDivisors(ll n) 
{  
    vector <ll> v;
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.pb(i);
  
            else // Otherwise print both 
              {
                  v.pb(i);
                  v.pb(n/i);
              }  
        } 
    } 
    return v;
}

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,a,b,c,y,x,i,j,k,q,arr[105];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>=n)
		{
			cout<<"1\n";
		}
		else
		{
			vector <ll> v=printDivisors(n);
			sort(all(v));
			ll ans=n;
			for(auto it=v.rbegin();it!=v.rend();it++)
			{
				if(*it<=k)
				{
					ans=*it;
					break;
				}
			}
			cout<<n/ans<<endl;
		}
		
		
	}
	return 0;
}