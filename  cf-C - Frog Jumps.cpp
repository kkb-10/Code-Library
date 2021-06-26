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
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ll maxi=-1;
        ll prev=-1;
        ll f=0;
        string s1="R";
        s.append(s1);
        if(s[0]=='R')
        {
            prev=0;
            maxi=1;
        }
        for(i=1;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                f=1;
                maxi=max(maxi,i-prev);
                //cout<<i<<" "<<maxi<<" "<<i-prev<<endl;
                prev=i;
            }
        }
        if(f==1)
        cout<<maxi<<endl;
        else
        {
            cout<<s.size()<<endl;
        }
    }    
    return 0;
}