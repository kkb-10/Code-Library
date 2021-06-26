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
    ll t,n,m,i,alph[30],a;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        vector <ll> v(n,0);
        for(i=0;i<m;i++)
        {
            cin>>a;
            v[0]++;
            v[a]--;
        }
        v[0]++;
        memset(alph,0,sizeof(alph));
        for(i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        for(i=0;i<n;i++)
        {
            alph[s[i]-'a']+=v[i];
        }
        for(i=0;i<26;i++)
        {
            cout<<alph[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}