#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{
    fastIO;
    ll t,n,a[10005],i,p,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll f=0;
        for(i=0;i<n;i++)
        {
            for(j=i+2;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    f=1;
                }
            }
        }
        if(f==0)
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