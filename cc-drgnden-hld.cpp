#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
ll parent_lr[200005];
ll parent_rl[200005];
bool vis[200005];
ll in_lr[200005];
ll out_lr[200005];
ll in_rl[200005];
ll out_rl[200005];
ll subsize_lr[200005];
ll subsize_rl[200005];
ll a[200005];
ll n;
ll timer=1;
void dfs1(ll src,vector<ll> v[])
{
    vis[src]=true;
    subsize_lr[src]=1;
    in_lr[src]=timer++;
    for(auto it:v[src])
    {
        if(!vis[it])
        {
            dfs1(it,v);
            subsize_lr[src]+=subsize_lr[it];
        }
    }
    out_lr[src]=timer++;
}

void dfs2(ll src,vector<ll> v[])
{
    vis[src]=true;
    subsize_rl[src]=1;
    in_rl[src]=timer++;
    for(auto it:v[src])
    {
        if(!vis[it])
        {
            dfs2(it,v);
            subsize_rl[src]+=subsize_rl[it];
        }
    }
    out_rl[src]=timer++;
}

ll st_lr[4*200005],st_rl[4*200005];
ll arr_lr[200005],arr_rl[200005];

void build1(ll si, ll ss,ll se)
{
    if(ss==se)
    {
        st_lr[si]=arr_lr[ss];
        return;
    }
    ll mid = (ss + se)/2;
	build1(2*si , ss , mid);
	build1(2*si+1 , mid+1 , se);
 
	st_lr[si] = st_lr[2*si] + st_lr[2*si+1];
}

void build2(ll si, ll ss,ll se)
{
    if(ss==se)
    {
        st_rl[si]=arr_rl[ss];
        return;
    }
    ll mid = (ss + se)/2;
	build2(2*si , ss , mid);
	build2(2*si+1 , mid+1 , se);
 
	st_rl[si] = st_rl[2*si] + st_rl[2*si+1];
}

ll query1(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qe<ss || qs>se)
    {
        return 0;
    }
    if(ss>=qs && se<=qe)
    {
		return st_lr[si];
    }
    
    ll mid=(ss+se)/2;
    ll p=query1(2*si,ss,mid,qs,qe);
    ll q=query1(2*si+1,mid+1,se,qs,qe);
    return p+q;
}

ll query2(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qe<ss || qs>se)
    {
        return 0;
    }
    if(ss>=qs && se<=qe)
    {
		return st_rl[si];
    }
    
    ll mid=(ss+se)/2;
    ll p=query2(2*si,ss,mid,qs,qe);
    ll q=query2(2*si+1,mid+1,se,qs,qe);
    return p+q;
}

void update1(ll si,ll ss,ll se,ll idx,ll val)
{
    if(ss==se)
    {
        arr_lr[idx]=val;
        st_lr[si]=val;
        return;
    }
    ll mid=(ss+se)/2;
    if(ss<=idx && idx<=mid)
    {
        update1(2*si,ss,mid,idx,val);
    }
    else
    {
        update1(2*si+1,mid+1,se,idx,val);
    }
    st_lr[si] = st_lr[2*si] + st_lr[2*si+1];
    
}

void update2(ll si,ll ss,ll se,ll idx,ll val)
{
    if(ss==se)
    {
        arr_rl[idx]=val;
        st_rl[si]=val;
        return;
    }
    
    ll mid=(ss+se)/2;
    if(ss<=idx && idx<=mid)
    {
        update2(2*si,ss,mid,idx,val);
    }
    else
    {
        update2(2*si+1,mid+1,se,idx,val);
    }
    st_rl[si] = st_rl[2*si] + st_rl[2*si+1];
}


// https://blog.anudeep2011.com/heavy-light-decomposition/

ll chainNo_lr=0,ptr_lr=0,chainHead_lr[200005],chainPos_lr[200005],chainInd_lr[200005],chainSize_lr[200005];

void hld1(ll cur,vector<ll> v[],ll prev)
{
    if(chainHead_lr[chainNo_lr]==-1) chainHead_lr[chainNo_lr]=cur;
    chainInd_lr[cur]=chainNo_lr;
    chainPos_lr[cur]=ptr_lr;
    arr_lr[ ptr_lr++ ]=a[cur];
    
    ll ind=-1,mai=-1;
    for(ll i=0;i<v[cur].size();i++)
    {
        if(subsize_lr[ v[cur][i] ]>mai && v[cur][i]!=prev)
        {
            mai=subsize_lr[v[cur][i]];
            ind=i;
        }
    }
    
    if(ind>=0)
    {
        hld1(v[cur][ind],v,cur);
    }
    //return ;
    
    for(ll i=0;i<v[cur].size();i++)
    {
        if(i!=ind && v[cur][i]!=prev)
        {
            chainNo_lr++;
            hld1(v[cur][i],v,cur);
        }
    }
    
}

ll chainNo_rl=0,ptr_rl=0,chainHead_rl[200005],chainPos_rl[200005],chainInd_rl[200005],chainSize_rl[200005];

void hld2(ll cur,vector<ll> v[],ll prev)
{
    if(chainHead_rl[chainNo_rl]==-1) chainHead_rl[chainNo_rl]=cur;
    chainInd_rl[cur]=chainNo_rl;
    chainPos_rl[cur]=ptr_rl;
    arr_rl[ptr_rl++]=a[cur];
    
    ll ind=-1,mai=-1;
    for(ll i=0;i<v[cur].size();i++)
    {
        if(subsize_rl[ v[cur][i] ]>mai && v[cur][i]!=prev)
        {
            mai=subsize_rl[v[cur][i]];
            ind=i;
        }
    }
    
    if(ind>=0)
    {
        hld2(v[cur][ind],v,cur);
    }
  
    for(ll i=0;i<v[cur].size();i++)
    {
        if(i!=ind && v[cur][i]!=prev)
        {
            chainNo_rl++;
            hld2(v[cur][i],v,cur);
        }
    }
    
}


ll query_up1(ll v,ll u)       
{
    ll cindex_u=chainInd_lr[u];
    ll cindex_v=chainInd_lr[v];
    ll ans=0;
    
    while(1)
    {
        if(cindex_u==cindex_v)
        {
            ans+=query1(1,0,ptr_lr-1,chainPos_lr[v],chainPos_lr[u]);
            break;
        }
        ans+=query1(1,0,ptr_lr-1,chainPos_lr[chainHead_lr[cindex_u]],chainPos_lr[u]);
        u=chainHead_lr[cindex_u];
        u=parent_lr[u];
        cindex_u=chainInd_lr[u];
    }
    return ans;
}

ll query_up2(ll v,ll u)       // v upar hai aur u neeche hai
{
    ll cindex_u=chainInd_rl[u];
    ll cindex_v=chainInd_rl[v];
    ll ans=0;
    while(1)
    {
        if(cindex_u==cindex_v)
        {
            
            ans+=query2(1,0,ptr_rl-1,chainPos_rl[v],chainPos_rl[u]);
            break;
        }
        ans+=query2(1,0,ptr_rl-1,chainPos_rl[chainHead_rl[cindex_u]],chainPos_rl[u]);
        u=chainHead_rl[cindex_u];
        u=parent_rl[u];
        cindex_u=chainInd_rl[u];
    }
    return ans;
}

int32_t main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	fastIO;
	ll t,l,m,i,k,p,r,q,j,x,y; 
	cin>>n>>q;
	ll h[200005];
	for(i=1;i<=n;i++)
	{
		cin>>h[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	memset(parent_rl,-1,sizeof(parent_rl));
	memset(parent_lr,-1,sizeof(parent_lr));
	vector <ll> v_lr[200005];
	vector <ll> v_rl[200005];
	ll pref_lr[200005]={0};
	ll pref_rl[200005]={0};
	i=1;
	stack<pair<ll,ll>> s;
	s.push({h[i],i});
	while(i<n)
	{
	    i++;
	    while(s.top().first<=h[i] )
	    {
	        s.pop();
	        if(s.empty())
	        {
	            break;
	        }
	    }
	    if(!s.empty())
	    {
	        parent_lr[i]=s.top().second;
	    }
	    s.push({h[i],i});
	}
	while(!s.empty())
	{
	    s.pop();
	}
	i=n;
	s.push({h[i],i});
	while(i>1)
	{
	    i--;
	    while(s.top().first<=h[i])
	    {
	        s.pop();
	        if(s.empty())
	        {
	            break;
	        }
	    }
	    if(!s.empty())
	    {
	        parent_rl[i]=s.top().second;
	    }
	    s.push({h[i],i});
	}
	while(!s.empty())
	{
	    s.pop();
	}
	for(i=1;i<=n;i++)
	{
	    pref_lr[i]+=a[i];
	    if(parent_lr[i]!=-1)
	    {
	        v_lr[i].pb(parent_lr[i]);
	        v_lr[parent_lr[i]].pb(i);
	        pref_lr[i]+=pref_lr[parent_lr[i]];
	    }
	}
	for(i=n;i>=1;i--)
	{
	    pref_rl[i]+=a[i];
	    if(parent_rl[i]!=-1)
	    {
	        v_rl[i].pb(parent_rl[i]);
	        v_rl[parent_rl[i]].pb(i);
	        pref_rl[i]+=pref_rl[parent_rl[i]];
	    }
	}
    memset(vis,false,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(parent_lr[i]==-1)
        {
            dfs1(i,v_lr);
        }
    }
    timer=1;
    memset(vis,false,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(parent_rl[i]==-1)
        {
            dfs2(i,v_rl);
        }
    }
    memset(chainHead_lr,-1,sizeof(chainHead_lr));
    memset(chainHead_rl,-1,sizeof(chainHead_rl));
    for(i=1;i<=n;i++)
    {
        if(parent_lr[i]==-1)
        {
            hld1(i,v_lr,-1);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(parent_rl[i]==-1)
        {
            hld2(i,v_rl,-1);
        }
    }
    build1(1,0,ptr_lr-1);
    build2(1,0,ptr_rl-1);
    
    while(q--)
    {
        ll type,b,c;
        cin>>type;
        if(type==1)
        {
            cin>>b>>c;
            a[b]=c;
            update1(1,0,ptr_lr-1,chainPos_lr[b],c);
            update2(1,0,ptr_rl-1,chainPos_rl[b],c);
     
        }
        else
        {
            cin>>b>>c;
            if(b<c)
            {
                if(in_lr[b]<=in_lr[c] && out_lr[b]>=out_lr[c])
                {
                    cout<<query_up1(b,c)<<endl;
                } 
                else
                {
                    cout<<"-1\n";
                }
            }
            else if(b>c)
            {
                if(in_rl[b]<=in_rl[c] && out_rl[b]>=out_rl[c])
                {
                    cout<<query_up2(b,c)<<endl;
                }
                else
                {
                    cout<<"-1\n";
                }
            }
            else
            {
                cout<<a[b]<<endl;
            }
        }
    }
	return 0;
}
