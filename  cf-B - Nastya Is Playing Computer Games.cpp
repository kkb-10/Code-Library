#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k,ext;
	cin>>n>>k;
	int ans;
	if(n==2)
	{
	    ans=n+(n-1)+(n+1);
	}
	else if(n%2==0)
	{
	    if(k<n/2)
	    {
	        ext=k-1;
	    }
	    else if(k>(n/2)+1)
	    {
	        ext=n-k;
	    }
	    else
	    {
	        ext=(n/2)-1;
	    }
	    ans=n+(n-1)+(n+1)+ext;
	}
	else 
	{
	    if(k<(n+1)/2)
	    {
	        ext=k-1;
	    }
	    else if(k>(n+1)/2)
	    {
	        ext=n-k;
	    }
	    else
	    {
	        ext=((n+1)/2)-1;
	    }
	    ans=n+(n-1)+(n+1)+ext;
	}
	cout<<ans;

	return 0;
}
