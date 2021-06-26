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
	ll t,n,m,i,s,k,q,j,x,y,a; 
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		map <ll,ll> m;
		m.clear();
		ll f=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a%k!=0)
			{
				f=1;
			}
			if(a%k!=0)
			{
				ll p=a/k;
				p=(p+1)*k;
				m[p-a]++;
			}
			
		}
		if(f==0)
		{
			cout<<"0\n";
		}
		else
		{
			for(auto it:m)
			{
				if(it.second>1)
				{
					m[it.first+k]+=it.second-1;
					m[it.first]=1;
				}
			}
			// for(auto it:m)
			// {
			// 	cout<<it.first<<" ";
			// }
			// cout<<endl;
			auto it=m.end();
			it--;
			cout<<(it->first)+1<<endl;
		}
	}
	return 0;
}
