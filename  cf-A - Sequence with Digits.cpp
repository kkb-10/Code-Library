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
    ll t,n,m,a,b,i,j,k;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>a>>k;
        for (i=1;i<k;i++)
        {
            set <ll> s;
            ll temp=a;
            while(temp!=0)
            {
                s.insert(temp%10);
                temp/=10;
            }
            auto it1=s.begin();
            auto it2=s.end();
            it2--;
            if(*it1 ==0 || *it2==0) break;
            a+=(*it1)*(*it2);
        }
        cout<<a<<endl;
        
    }
    return 0;
}