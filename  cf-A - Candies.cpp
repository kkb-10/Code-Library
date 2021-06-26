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
    ll t,n,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll mul=2;
        ll add=3;
        while(n%add!=0)
        {
            mul*=2;
            add+=mul;
        }
        //cout<<n<<" "<<add<<" ";
        cout<<n/add<<endl;

    }
    return 0;
}