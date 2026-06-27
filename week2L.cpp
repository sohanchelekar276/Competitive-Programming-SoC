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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> c(n);
        REP(i,0,n) cin >> c[i];
        sort(all(c));
        if(c[0]!=1){
            cout << "NO\n";
            continue;
        }

        ll current_sum = 1;
        bool bad = false;
        REP(i, 1, n){
            if(c[i]> current_sum){
                cout << "NO\n";
                bad = true;
                break;
            }

            current_sum += c[i];
        }

        if(!bad) cout << "YES\n";
    }
}

