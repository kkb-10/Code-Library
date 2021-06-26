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
    ll t,n,a,b,i,arr[200005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int pos=0;
        int neg=0;
        ll sum=0;
        ll max_pos=0;
        ll max_neg=-1e12;
        if(arr[0]<0)
        {
            neg=1;
            if(arr[0]>max_neg)
            {
                max_neg=max(max_neg,arr[0]);
            }
        }
        else 
        {
            pos=1;
            if(arr[0]>max_pos)
            {
                max_pos=max(max_pos,arr[0]);
            }
        }
        //cout<<sum<<" ";
        for(i=1;i<n;i++)
        {
            if(arr[i]<0)
            {
                if(neg==0)
                {
                    sum+=max_pos;
                    max_pos=0;
                    max_neg=-1e12;

                }
                if(arr[i]>max_neg)
                {
                    max_neg=max(max_neg,arr[i]);
                }
                neg=1;
                pos=0;
            }
            else
            {
                if(pos==0)
                {
                    sum+=max_neg;
                    max_pos=0;
                    max_neg=-1e12;
                }
                if(arr[i]>max_pos)
                {
                    max_pos=max(max_pos,arr[i]);
                }
                neg=0;
                pos=1;
            }
            //cout<<sum<<" ";
        }
        //cout<<endl<<max_pos<<" "<<max_neg<<endl;
        if(arr[n-1]<0)
        {
            sum+=max_neg;
        }
        else
        {
            sum+=max_pos;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}