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

int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,a,b,c,k,q,x,y,p,j,l,r;
    cin>>t;
	//t=1;
    while(t--)
    {
        int sum;
        cin>>n>>l>>r>>sum;
        k=r-l+1;
        set <int> s;
        int f=0;
        for(i=n;i>=1;i--)
        {
            if(i<=sum)
            {
                if(i==sum && k==1)
                {
                    s.insert(i);
                    k--;
                    sum-=i;
                }
                else if(i<sum && sum-i>=((k-1)*k)/2)
                {
                    s.insert(i);
                    k--;
                    sum-=i;
                }

            }
            if(k==0 && sum==0)
            {
                f=1;
                break;
            }
        }
        if(!f) cout<<"-1\n";
        else
        {
            vector <int> v(n+1,0);
            p=l-1;
            for(auto it:s)
            {
                v[p++]=it;
            }
            set <int> s1;
            for(i=1;i<=n;i++)
            {
                if(s.find(i)==s.end())
                {
                    s1.insert(i);
                }
            }
            if(s1.sz>0)
            {
                auto it=s1.begin();
                for(i=0;i<n;i++)
                {
                    if(v[i]==0)
                    {
                        v[i]=*it;
                        it++;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            
        }
    }
    return 0;
}