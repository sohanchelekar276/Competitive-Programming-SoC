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
    ll n;
    cin >> n;
 
    while(true){
        n++;
        ll temp = n;
        bool visited[10] = {false};
        bool distinct = true;
        while(temp>=1){
            ll digit = temp%10;
            if(visited[digit]) {
                distinct = false;
                break;
            }
            visited[digit] = true;
            temp /= 10;
        }
        if(distinct) {
            cout << n << endl;
            return;
        }
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