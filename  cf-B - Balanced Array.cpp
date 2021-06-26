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
    ll t,n,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll p=n/2;
        if(p%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            a=2;
            for(i=0;i<p;i++)
            {
                cout<<a<<" ";
                a+=2;
            }
            b=1;
            for(i=0;i<p-1;i++)
            {
                cout<<b<<" ";
                b+=2;
            }
            cout<<b+p<<endl;
        }
        
    }
    return 0;
}