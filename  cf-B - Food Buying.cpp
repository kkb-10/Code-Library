#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{
    fastIO;
	ll t,n,i,o,e,a;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n<10)
	    {
	        cout<<n<<endl;
	    }
	    else
	    {
	        ll ans=n;
	        ll c=0;
	        ll a,b;
	        a=n%10;
	        n/=10;
	        c+=n;
	        while(n>0)
	        {
	            b=a+n;
	            a=b%10;
	            n=b;
	            n/=10;
	            c+=n;
	        }
	        cout<<ans+c<<endl;
	    }
	}
	return 0;
}
