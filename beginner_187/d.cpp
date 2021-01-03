#include<bits/stdc++.h>
#define ll long long
#define rep0(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)

using namespace std;

int main(void)
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n,x,y,sum=0;
    scanf("%lld",&n);
    vector<ll>a(n);
    vector<ll>tc(n);
    vector<pair<ll,ll>>c(n);
    for(ll i=0;i<n;i++)
    {
        scanf("%lld %lld",&x,&y);
        sum+=x;
        a[i]=x;
        tc[i]=x+y;
        c[i].first=(tc[i]+a[i]),c[i].second=i;
    }
    sort(c.rbegin(),c.rend());
    ll ans=0,k=0;
    for(auto i:c)
    {
        ans++;
        k+=tc[i.second];
        sum-=a[i.second];
        if(k>sum)
            break;
    }
    printf("%lld",ans);
    return 0;
}
