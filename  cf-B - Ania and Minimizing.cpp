#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
vector <ll> v;

int main() 
{ 
    fastIO;
    ll n,k,i;
    string s;
    cin>>n>>k;
    cin>>s;
    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(cnt==k)
        {
            break;
        }
        if(i==0)
        {
            if(s[i]!='1' && n>1)
            {
                s[i]='1';
                cnt++;
            }
            else if(n==1)
            {
                s[i]='0';
                cnt++;
            }
        }
        else
        {
            if(s[i]!='0')
            {
                s[i]='0';
                cnt++;
            }
        } 
        
        //cout<<s[i]<<endl;   
    }
    cout<<s;
    return 0;
} 

