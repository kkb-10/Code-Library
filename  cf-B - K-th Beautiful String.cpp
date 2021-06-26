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
		cin>>n>>k;
		b=1;
		a=k;
		while(a-b>0)
		{
			a-=b;
			b++;
		}
		
		ll pos1=n-1-b;
		ll pos2=n-a;
		//cout<<pos1<<" "<<pos2<<endl;
		for(i=0;i<n;i++)
		{
			if(i==pos1 || i==pos2)
			{
				cout<<"b";
			}
			else
			{
				cout<<"a";
			}
		}
		cout<<endl;
	}
	return 0;
}