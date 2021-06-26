#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k,a,b;
	vector <pair <int,int> > v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b;
	    v.push_back({a,b});
	}
	cin>>k;
	int cnt=v.size();
	for(auto it=v.begin();it!=v.end();it++)
	{
	    if((k>=it->first)&&(k<=it->second))
	    {
	        break;
	        cnt--;
	    }
	    cnt--;
	}
	cout<<cnt<<endl;
	
	return 0;
}
