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
    ll n;
    scanf("%lld",&n);
    vector<pair<ll,ll>>v(n);
    rep0(i,n)
    {
        scanf("%lld %lld",&v[i].first,&v[i].second);
    }
    ll ans=0;
    rep0(i,n)
    {
        for(ll j=i+1;j<n;j++)
        {
            double sl=(double)(double)(v[j].second-v[i].second)/(double)(v[j].first-v[i].first);
            if(abs(sl)<=1.000)
            ans++;        
        }
    }
    printf("%lld",ans);
    return 0;
}
