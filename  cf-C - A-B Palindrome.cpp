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
    int t,n,i,a,b,c,k,q,x,y,p,j,h;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        string s;
        cin>>s;
        n=a+b;
        int f=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(s[n-i-1]=='?')
                {
                    s[n-i-1]='0';
                }
                else if(s[n-i-1]=='1')
                {
                    f=1;
                    break;
                }
            }
            else if(s[i]=='1')
            {
                if(s[n-i-1]=='?')
                {
                    s[n-i-1]='1';
                }
                else if(s[n-i-1]=='0')
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"-1\n";
            continue;
        }
        rep(i,0,n)
        {
            if(s[i]=='0')
            {
                a--;
            }
            else if(s[i]=='1')
            {
                b--;
            }
        }
        if(a<0 || b<0)
        {
            cout<<"-1\n";
            continue;
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?' && s[n-i-1]=='?')
            {
                if(i==n-i-1)
                {
                    if(a%2!=0)
                    {
                        s[i]='0';
                        a--;
                    }
                    else if(b%2!=0)
                    {
                        s[i]='1';
                        b--;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else if(a>=2)
                {
                    s[i]='0';
                    s[n-i-1]='0';
                    a-=2;
                }
                else if(b>=2)
                {
                    s[i]='1';
                    s[n-i-1]='1';
                    b-=2;
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(a<0 || b<0 || f)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<s<<endl;
        }

    }
    return 0;
}