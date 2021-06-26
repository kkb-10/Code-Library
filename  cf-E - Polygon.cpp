#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};
int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,a,b,i,j;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <ll> v[n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>c;
                v[i].pb(c-'0');
            }
        }
        ll f=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               // cout<<v[i][j]<<" ";
                if(v[i][j]==1)
                {
                    if(i+1==n || j+1==n|| v[i+1][j]==1|| v[i][j+1]==1)
                    {
                        a=0;
                    }
                    else 
                    {
                        //cout<<i<<" "<<j<<" "<<v[i+1][j]<<endl;
                        f=1;
                        break;
                    }
                }
            }
            //cout<<endl;
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}