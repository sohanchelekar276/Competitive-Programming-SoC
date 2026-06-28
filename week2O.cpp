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
        vector<string> grid(2);
        cin >> grid[0] >> grid[1];

        ll i = 0, j = 0, count = 1;
        cout << grid[0][0];
        while(i!=1 || j!=n-1){
            if(i==1) {
                cout << grid[i][j+1];
                j++;
            }
            else if(j==n-1){
                cout << grid[i+1][j];
                i++;
            }
            else{
                char a = grid[i][j+1];
                char b = grid[i+1][j];
                if(a > b){
                    cout << grid[i+1][j];
                    i++;
                }
                else if(a < b){
                    cout << grid[i][j+1];
                    j++;
                    count = 1;
                }
                else{
                    cout << grid[i][j+1];
                    j++;
                    count++; 
                }
            }
        }
        cout << "\n" << count << "\n";
    }
}

