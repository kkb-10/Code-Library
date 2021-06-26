#include <bits/stdc++.h>
#include<string.h>
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
    ll t,i,n,h,mini,a,b,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        cout<<(23-h)*60 + (60-m)<<endl;
    }
    return 0;
}