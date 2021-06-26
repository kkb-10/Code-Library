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
	ll t,n,a,b,c,y,x,i,j,k,q,arr[105];
	cin>>t;
	while(t--)
	{
		string s[9];
		for(i=0;i<9;i++)
		{
			cin>>s[i];
		}
		y=0;
		k=0;
		for(i=0;i<9;i++)
		{
			//cout<<i<<" "<<k<<endl;
			if(s[i][k]=='9')
			{
				s[i][k]='1';
			}
			else
			{
				s[i][k]++;
			}
			k+=3;
			if((i+1)%3==0)
			{
				y++;
				k=y;
			}
		}
		for(i=0;i<9;i++)
		{
			cout<<s[i]<<endl;
		}
	}
	return 0;
}