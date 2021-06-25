#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int st[4000005];
int arr[1000005];
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
void build(int si, int ss,int se)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return;
    }
    int mid = (ss + se)/2;
    build(2*si , ss , mid);
    build(2*si+1 , mid+1 , se);

    st[si] = min(st[2*si],st[2*si+1]);
}

int query(int si,int ss,int se,int qs,int qe)
{
    if(qe<ss || qs>se)
    {
        return 1000000000;
    }
    if(ss>=qs && se<=qe)
    {
        return st[si];
    }
    
    int mid=(ss+se)/2;
    int p=query(2*si,ss,mid,qs,qe);
    int q=query(2*si+1,mid+1,se,qs,qe);
    return min(p,q);
}

int main() {

    int n,q,a,b;
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    build(1,0,n-1);
    while(q--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",query(1,0,n-1,a,b));
    }
    return 0;
}
