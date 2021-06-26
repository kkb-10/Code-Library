#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{
    fastIO;
	ll t,n,m,i,j,arr[105],p,vis[105];
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    memset(vis,0,sizeof(vis));
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>p;
	        //cout<<p<<" ";
	        vis[p]=1;
	    }
	    ll f=0;
	    for(i=0;i<n-1;i++)
	    {
	        for(j=0;j<n-1-i;j++)
	        {
	            if(arr[j]>arr[j+1])
	            {
	                if(vis[j+1]==1)
	                {
	                    ll temp=arr[j];
	                    arr[j]=arr[j+1];
	                    arr[j+1]=temp;
	                }
	                else
	                {
	                    f=1;
	                    break;
	                }
	            }
	        }
	    }
	    if(f==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
