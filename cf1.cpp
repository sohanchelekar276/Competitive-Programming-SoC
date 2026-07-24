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
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
 
    if(s1>s2){
        cout << 1 << endl;
        return;
    } 
    else if(s2>s1){
        cout << -1 << endl;
        return;
    }
    else{
        cout << 0 << endl;
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