#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};
int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ll t,n,m,a,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
		set <pair <ll,ll>,cmp> s;
		s.insert({0,n-1});
		vector <ll> arr(n,0);
		for(i=0;i<n;i++)
		{
			auto it=*s.begin();
			s.erase(s.begin());
			ll id=(it.first + it.second)/2;
			arr[id]=i+1;
			if(it.first < id) s.insert({it.first,id-1});
			if(it.second > id) s.insert({id+1,it.second});
		}
		for(auto it:arr)
		{
			cout<<it<<" ";
		}
		cout<<endl;
    }
    return 0;
}