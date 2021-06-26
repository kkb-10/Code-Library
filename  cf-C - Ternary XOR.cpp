#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
ll f;

void solve(ll c,string &a,string &b,ll index)
{
    if(c==2)
    {
        if(f==0 || index==0)
        {
            a+="1";
            b+="1";
        }
        else
        {
            a+="2";
            b+="0";   
        }
    }
    else if(c==0)
    {
        if(index==0)
        {
            a+="1";
            b+="2";
            
            f=1;
        }
        else 
        {
            a+="0";
            b+="0";
            
        }
    }
    else if(c==1)
    {
        if(index==0)
        {
            a+="0";
            b+="1";
            f=1;
        }
        else if(f==0)
        {
            a+="0";
            b+="1";
            f=1;
        }
        else if(f==1)
        {
            a+="1";
            b+="0";  
        }
    }
}

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,i,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,a,b;
        cin>>s;
        f=0;
        for(i=0;i<n;i++)
        {
            solve(s[i]-'0',a,b,i);
        }
        cout<<a<<endl<<b<<endl;
        
    }
    return 0;
}