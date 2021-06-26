#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"


int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,l,r,u,d;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>d>>u;
        ll x0,y0,x1,y1,x2,y2;
        cin>>x0>>y0>>x1>>y1>>x2>>y2;
        ll x=r-l;
        ll y=u-d;
        
        x=x+x0;
        y=y+y0;
        
        if( (l>0 && x0-1<x1) && (r>0 && x0+1>x2) )
        {
            cout<<"No\n";
        }
        else if( (d>0 && y0-1<y1) && (u>0 && y0+1>y2))
        {
            cout<<"No\n";
        }
        else if(x>=x1 && x<= x2 && y>=y1 && y<=y2)
        {
            cout<<"Yes\n";
        }
        else 
        {
            cout<<"No\n";
        }
    }
    return 0;
}