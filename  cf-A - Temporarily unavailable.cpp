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
    ll t,a,b,c,r,left,right,a1,ans,a2,temp;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        left=c-r;
        right=c+r;
        //cout<<left<<" "<<right<<endl;
        ans=0;
        if(c>=a && c<=b)
        {
            a1=left-a;
            a2=b-right;
            if(a1 > 0)
            {
                ans+=a1;
            }
            if(a2 >0)
            {
                ans+=a2;
            }
        }
        else if(c<a)
        {
            a1=b-right;
            if(a1>0  && a1<=abs(b-a))
            {
                ans+=a1;
            }
            if( a1>abs(b-a))
            {
                ans+=abs(b-a);
            }
        }
        else if(c>b)
        {
            a1=left-a;
            if(a1>0 && a1<=abs(b-a))
            {
                ans+=a1;
            }
            if( a1>abs(b-a))
            {
                ans+=abs(b-a);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}