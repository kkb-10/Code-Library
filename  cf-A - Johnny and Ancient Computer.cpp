#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,i,j,k,q,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll mini=min(a,b);
        ll maxi=max(a,b);
        if(mini!=maxi)
        {
            if(maxi%mini!=0)
            {
                cout<<"-1\n";
            }
            else
            {
                maxi/=mini;
                ll cnt=0;
                ll f=0;
                while(maxi!=1)
                {
                    if(maxi%8==0) maxi/=8;
                    else if(maxi%4==0) maxi/=4;
                    else if(maxi%2==0) maxi/=2;
                    else 
                    {
                        f=1;
                        break;
                    }
                    cnt++;
                }
                if(f==1 || maxi!=1)
                {
                    cout<<"-1\n";
                }
                else
                {
                    cout<<cnt<<endl;
                }
                
            }
            
        }
        else
        {
            cout<<"0\n";
        }
        
    }
    return 0;
}