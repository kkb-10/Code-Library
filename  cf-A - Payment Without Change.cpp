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
    ll t,a,b,n,s,req_x,req_y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        req_x=s/n;
        req_y=(s-req_x*n);
        if(req_x<=a && req_y<=b)
        {
            cout<<"YES"<<endl;
        }
        else if(a<req_x)
        {
            req_y=(s-a*n);
            if(req_y<=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}