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
    ll t,n,m,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<"0\n";
        }
        else 
        {
            if(n<3)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<2*m<<endl;
            }
            
        }
    }
    return 0;
}