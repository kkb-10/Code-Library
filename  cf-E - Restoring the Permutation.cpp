#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define ff first
#define ss second
#define pb push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int ceil(int a,int b){return (a+b-1)/b;}
int gcd(int a,int b){if(b==0) return a;return gcd(b,a%b);}
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
int mod=1e9+7;
#define elif else if
#define INF 1e18+7
bool vis[200005],vis1[200005];
int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,a,b,c,k,q,x,y,p,j,h;
    cin>>t;
	//t=1;
    while(t--)
    {
        cin>>n;
        vector <int> v,v1(n,0),v2(n,0),index;
        memset(vis,false,sizeof(vis));
        memset(vis1,false,sizeof(vis1));
        set <int> s;
        rep(i,0,n)
        {
            s.insert(i+1);
            cin>>a;
            vis[a]=1;
            vis1[a]=1;
            v.pb(a);
        }
        v1[0]=v[0];
        v2[0]=v[0];
        index.pb(0);
        rep(i,1,n)
        {
            if(v[i]!=v[i-1])
            {
                v1[i]=v[i];
                v2[i]=v[i];
                index.pb(i);
            }
        }
        j=0;
        rep(i,1,n+1)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                while(v1[j]!=0)
                {
                    j++;
                }
                v1[j]=i;
            }
        }
        rep(i,0,n)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        int maxi=v2[0];
        for(i=1;i<n;i++)
        {
            if(v2[i]<maxi)
            {
                auto it=s.lower_bound(maxi);
                it--;
                v2[i]=*it;
                s.erase(it);
            }
            else
            {
                auto it=s.lower_bound(maxi);
                s.erase(it);
                maxi=v[i];
            }
        }
        rep(i,0,n)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}