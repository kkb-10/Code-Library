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
	    e=0;
	    o=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        if(a%2==0)
	        {
	            e++;
	        }
	        else
	        {
	            o++;
	        }
	    }
	    if(e==0)
	    {
	        if(o%2==0)
	        {
	            cout<<"NO"<<endl;
	        }
	        else
	        {
	            cout<<"YES"<<endl;
	        }
	    }
	    else if(o==0)
	    {
	        cout<<"NO\n";
	    }
	    else
	    {
	        cout<<"YES\n";
	    }
	    
	}
	return 0;
}
