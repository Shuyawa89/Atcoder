#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
using vvi = vector<vi>; //vvi a(n, vi(m)); でn*mの2次元配列aが作成される
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;

int main()
{
	int n,m;
    cin >> n >> m;
    vi p(n), c(n);
    vector<vector<bool>> f(n, vector<bool>(m));

    rep(i,n){
        cin >> p[i] >> c[i];
        rep(j,c[i]){
            int in;
            cin >> in;
            f[i][in-1] = true;
        }
    }

    rep(i,n){
        rep(j,n){
            if(i==j) continue;//同じ人は比較しない
            if(c[i] > c[j]) continue; //機能数が少なかったらスキップ
            if(p[i] > p[j]){ //価格が安い時
                int _count = 0;
                rep(k,m){//共通の機能数を数える
                    if(f[i][k] && f[j][k])
                        _count++;
                }
                if(c[i] == _count){//機能数がiの機能と同じなら(jがiの機能を全て持っている)
                    //cout << "i : "<< i<< " j : " << j << endl;
                    //cout << c[i] << " " << _count << endl;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(p[i] == p[j]){//価格が同じ時
                int _count = 0;
                rep(k,m){//共通の機能数を数える
                    if(f[i][k] && f[j][k])
                        _count++;
                }
                if(c[i] == _count){
                    if(c[i] < c[j]){
                        //cout << "i : "<< i<< " j : " << j << endl;
                        //cout<< c[i] << " " << _count << endl;
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
