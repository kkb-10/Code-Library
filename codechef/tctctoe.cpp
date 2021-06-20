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

int cntwin(string s[3],char c)
{
    int ans=0,i,j;
    rep(i,0,3)
    {
        int cnt=0;
        rep(j,0,3)
        {
            if(s[i][j]==c)
            {
                cnt++;
            }
        }
        if(cnt==3) ans++;
        cnt=0;
        rep(j,0,3)
        {
            if(s[j][i]==c)
            {
                cnt++;
            }
        }
        if(cnt==3) ans++;
    }
    if(s[0][0]==c && s[1][1]==c && s[2][2]==c) ans++;
    if(s[0][2]==c && s[1][1]==c && s[2][0]==c) ans++;
    return ans;
}
int32_t main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fastIO;
    int t,n,i,a,b,c,q,p,j,l,r,mm;
    cin>>t;
	//t=1;
    while(t--)
    {
        string s[3];
        cin>>s[0];
        cin>>s[1];
        cin>>s[2];
        int x=0,o=0,space=0;
        rep(i,0,3)
        {
            rep(j,0,3)
            {
                if(s[i][j]=='O')
                {
                    o++;
                }
                else if(s[i][j]=='X')
                {
                    x++;
                }
                else
                {
                    space++;
                }
            }
        }
        int xwin=cntwin(s,'X');
        int owin=cntwin(s,'O');
        if(xwin>0 && owin>0)
        {
            cout<<"3\n";
        }
        else if(x-o>1 || x-o<0)
        {
            cout<<"3\n";
        }
        else 
        {
            if(xwin>=1)
            {
                if(x-o==1) cout<<"1\n";
                else cout<<"3\n";
            }
            else if(owin>=1)
            {
                if(x-o==0) cout<<"1\n";
                else cout<<"3\n";
            }
            else
            {
                if(o+x==9) cout<<"1\n";
                else cout<<"2\n";
            }
        }
            
    }
    return 0;
}