#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>; //Example : vi test(int : i);
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;

int main()
{
	int N,M;
    cin >> N >> M;
    vl x(N),y(N),z(N);
    ll ans=0;
    ll a,b,c,temp_ans;
    rep(i,N){
        cin >> x[i] >> y[i] >> z[i];
    }
    rep(bit,8){
        vl sum(N);
        temp_ans = 0;
        rep(i,N){
            a = x[i] * (bit & 1 ? 1 : -1);
            b = y[i] * (bit & 2 ? 1 : -1);
            c = z[i] * (bit & 4 ? 1 : -1);
            sum[i] = a+b+c;
        }
        sort(sum.rbegin(),sum.rend());
        rep(i,M){
            temp_ans += sum[i];
        }
        //cout << "仮の答え " << bit << " : " << temp_ans << endl;
        ans = max<ll>(ans,temp_ans);
    }

    cout << ans << endl;

    return 0;
}
