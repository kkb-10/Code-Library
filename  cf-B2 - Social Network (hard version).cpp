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

ll mod=998244353;


int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,n,a,b,c,y,x,i,j,k,arr[105];
	// cin>>t;
	// while(t--)
	// {
		cin>>n>>k;
		vector <ll> v;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.pb(a);
		}
		map<ll,ll> m;
		queue <ll> q;
		for(i=0;i<n;i++)
		{
			if(q.size()<k)
			{
				
				if(m[v[i]]==0)
				{
					//cout<<"push "<<v[i]<<endl;
					q.push(v[i]);
				}
				
				m[v[i]]=1;
			}
			else
			{
				if(m[v[i]]==0)
				{
					
					ll p=q.front();
					//cout<<"\npop "<<p<<endl;
					m[p]=0;
					q.pop();
					//cout<<"push "<<v[i]<<endl;
					q.push(v[i]);
					m[v[i]]=1;
				}
			}
		}
		vector <ll> ans;
		cout<<q.size()<<endl;
		while(!q.empty())
		{
			ans.pb(q.front());
			q.pop();
		}
		reverse(all(ans));
		for(auto it:ans)
		{
			cout<<it<<" ";
		}

	// }
	return 0;
}