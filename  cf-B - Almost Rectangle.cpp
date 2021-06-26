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
	//t=1;
    while(t--)
    {
        cin>>n;
        string s[n+1];
        rep(i,0,n)
        {
            cin>>s[i];
        }
        int i1,i2,j1,j2;
        int f=0;
        rep(i,0,n)
        {
            rep(j,0,n)
            {
                if(s[i][j]=='*')
                {
                    if(f==0)
                    {
                        i1=i;
                        j1=j;
                        f=1;
                    }
                    else
                    {
                        i2=i;
                        j2=j;
                        break;
                    }
                }
            }
        }
        if(i1==i2)
        {
            if(i1-1>=0)
            {
                s[i1-1][j1]='*';
                s[i1-1][j2]='*';
            }
            else
            {
                s[i1+1][j1]='*';
                s[i1+1][j2]='*';
            }
            rep(i,0,n)
            {
                cout<<s[i]<<endl;
            }
        }
        else if(j1==j2)
        {
            if(j1-1>=0)
            {
                s[i1][j1-1]='*';
                s[i2][j1-1]='*';
            }
            else
            {
                s[i1][j1+1]='*';
                s[i2][j1+1]='*';
            }
            rep(i,0,n)
            {
                cout<<s[i]<<endl;
            }
        }
        else
        {
            if(j1<j2)
            {
                s[i1][j1+abs(j2-j1)]='*';
                s[i1+abs(i2-i1)][j1]='*';
            }
            else
            {
                s[i1][j1-abs(j2-j1)]='*';
                s[i1+abs(i2-i1)][j1]='*';
            }
            rep(i,0,n)
            {
                cout<<s[i]<<endl;
            }
        }
    }
    return 0;
}