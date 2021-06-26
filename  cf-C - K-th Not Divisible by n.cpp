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
    ll t,n,m,a,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll cnt=n-1;
        ll p=n;
        ll mul=k/cnt;
        ll rem=k%cnt;
        p*=mul;
        if(rem==0)
        {
            p-=1;
        }
        else
        p+=rem;
        cout<<p<<endl;  
        
    }
    return 0;
}