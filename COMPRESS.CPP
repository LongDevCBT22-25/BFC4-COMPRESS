#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) s.size()
#define fo(i,a,b) for(int i=a,_b=(b);i<_b;i++)
#define int long long
using namespace std;
string s;
void input(){
    FastIO;
    freopen("COMPRESS.INP","r",stdin);
    freopen("COMPRESS.OUT","w",stdout);
    cin >> s;
}
void solve(){
    fo(i,1,sz(s)+1){
        if(sz(s)%i!=0) continue;
        bool c=1;
        fo(j,0,sz(s)-1)
            if(s[j]!=s[j%i]){
                c=0; break;
            }
        if(c){
            cout << sz(s)/i << s.substr(0,i);
            break;
        }
    }
}
int32_t main(){
    input();
    solve();
}