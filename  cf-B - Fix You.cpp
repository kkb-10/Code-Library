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
		cin>>n>>m;
		string s;
		vector <char> v[105];
		memset(vis,false,sizeof(vis));
		rep(i,0,n)
		{
			cin>>s;
			rep(j,0,m)
			{
			    v[i].pb(s[j]);
			}
			
		}
		ll cnt=0;
		rep(i,0,n)
		{
			rep(j,0,m)
			{
				if(!vis[i][j])
				{
					ll k=i;
					ll p=j;
					while(v[k][p]!='C' && !vis[k][p])
					{
						vis[k][p]=true;
						if(v[k][p]=='R')
						{
							p++;
							if(p>=m)
							{
								cnt++;
								p--;
								k++;
							}
						} 
						else 
						{
							k++;
							if(k>=n)
							{
								cnt++;
								k--;
								p++;
							}
						}
					}
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
