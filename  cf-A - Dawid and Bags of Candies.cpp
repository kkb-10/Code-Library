#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
vector <ll> v;

int main() 
{ 
    fastIO;
    ll t,n,m,s;
    t=4;
    while(t--)
    {
        cin>>n;
        v.pb(n);
    }
    sort(v.begin(),v.end());
        if(v[0]+v[3]==v[1]+v[2])
        cout<<"YES"<<endl;
        else if(v[0]+v[1]+v[2]==v[3])
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    return 0;
} 

