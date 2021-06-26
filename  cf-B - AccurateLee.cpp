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
		string s;
		cin>>s;
		vector <char> v;
		ll f=0;
		ll cnt=0;
		ll cnt1=0;
		ll cnt0=0;
		for(i=0;i<n-1;i++)
		{
			if(s[i]=='0' && f==0)
			{
				v.pb(s[i]);
			}
			else 
			{
				f=1;
			}
			if(s[i]=='1' && s[i+1]=='0')
			{
				cnt++;
			}
			if(s[i]=='1')
			{
				cnt1++;
			}
			else
			{
				cnt0++;
			}
			
		}
		if(s[n-1]=='1')
		{
			cnt1++;
		}
		else
		{
			cnt0++;
		}
		
		if(cnt>0)
		{
			v.pb('0');
			ll i=n-1;
			while(s[i]=='1')
			{
				v.pb('1');
				i--;
			}
			for(auto it:v)
			{
				cout<<it;
			}
			cout<<endl;
		}
		else
		{
			for(i=0;i<cnt0;i++)
			{
				cout<<'0';
			}
			for(i=0;i<cnt1;i++)
			{
				cout<<'1';
			}
			cout<<endl;
		}	
	}
	return 0;
}
