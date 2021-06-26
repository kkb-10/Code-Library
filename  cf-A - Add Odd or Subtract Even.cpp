#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{
    fastIO;
	ll t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if(a==b)
	    {
	        cout<<"0\n";
	    }
	    else if(a<b)
	    {
	        if((b-a)%2!=0)
	        {
	            cout<<"1\n";
	        }
	        else
	        {
	            cout<<"2\n";
	        }
	    }
	    else
	    {
	        if((a-b)%2!=0)
	        {
	            cout<<"2\n";
	        }
	        else
	        {
	            cout<<"1\n";
	        }
	    }
	}
	return 0;
}
