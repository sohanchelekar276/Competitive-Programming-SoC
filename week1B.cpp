#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sq(a) (a)*(a)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define vec(a) vector<ll> a(n)
#define input(a) REP(i,0,n) cin>>a[i]
#define output(a) REP(i,0,n) cout<<a[i]<<" "

const ll MOD = 1e9 + 7;
const ll MAXN = 100005;

void solve(){
    ll n, count = 0;
    cin >> n;
    while(true){
        if(n%7 == 0){
            while(count--){
                cout << "4";
            }
            REP(i, 0, n/7){
                cout << "7";
            }
            return;
        }
        if(n < 0){
            cout << "-1\n";
            return;
        }
        n -= 4;
        count++;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
