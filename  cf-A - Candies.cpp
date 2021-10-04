#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t,n,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int mul=2;
        int add=3;
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