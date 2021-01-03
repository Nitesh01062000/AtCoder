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
    set<string>st;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='!')
        {
            if(st.find(s.substr(1))!=st.end())
            {
                cout<<s.substr(1);
                return 0;
            }
            else
                st.insert(s);
        }
        else
        {
            if(st.find("!"+s)!=st.end())
            {
                cout<<s;
                return 0;
            }
            st.insert(s);
        }
    }
    printf("satisfiable");
    return 0;
}
