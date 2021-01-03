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
    ll a,b;
    scanf("%lld %lld",&a,&b);
    ll s1=0;
    s1+=(a%10);
    a/=10;
    s1+=(a%10);;
    a/=10;
    s1+=(a%10);
    ll s2=0;
    s2+=(b%10);
    b/=10;
    s2+=(b%10);;
    b/=10;
    s2+=(b%10);
    printf("%lld",max(s1,s2));
    return 0;
}
