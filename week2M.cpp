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

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        REP(i,0,n){
            cin >> a[i].F >> a[i].S;
        }
        sort(all(a));

        ordered_set end_positions;
        ll greetings = 0;

        REP(i,0,n){
            ll current_end = a[i].S;
            ll greater_elements = end_positions.size() - end_positions.order_of_key(current_end);

            greetings += greater_elements;
            end_positions.insert(current_end);
        }

        cout << greetings << "\n";
    }
}

