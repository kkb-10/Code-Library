#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb <push_back>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main() 
{ 
    fastIO;
    ll t,i,n,a,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ecnt1=0,ecnt2=0,ocnt1=0,ocnt2=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                ecnt1++;
            }
            else
            {
                ocnt1++;
            }
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                ecnt2++;
            }
            else
            {
                ocnt2++;
            }
        }
        cout<<ecnt1*ecnt2 + ocnt1*ocnt2<<endl;
    }
    return 0;
} 

