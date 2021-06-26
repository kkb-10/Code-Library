#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	long long int n,cnt=0,ans=0;
	cin>>n>>s;
	for(int i=0;s[i]!='\0';i++)
	{
	    //cnt++;
	    if((s[i]-48)%2==0)
	    {
	        cnt++;
	    }
	}
	//cout<<cnt<<endl;
	for(int i=0;s[i]!='\0';i++)
	{
	    if((s[i]-48)%2!=0)
	    {
	        
	        ans+=cnt;
	    }
	    else
	    {
	        
	        ans+=cnt;
	        cnt--;
	    }
	}
	cout<<ans;
	return 0;
}
