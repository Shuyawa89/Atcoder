#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(v) for(auto &a : v) cin >> a;
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
#define F first;
#define S second;
#define grei greater<int>{}
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;
template <typename T>
using uset = unordered_set<T>;
template <typename T1, typename T2>
using umap = unordered_map<T1, T2>;

int main()
{
	int n;
	cin >> n;

	vector<vector<char>> table(n,vector<char>(n));
	rep(i,n){
		rep(j,n){
			cin >> table[i][j];
		}
	}

	bool flag = true;
	for(int i = 0;i<n;i++){
		for(int j = 1+i;j<n;j++){
			if(table[i][j] == 'D' || table[j][i]== 'D'){
				if(table[i][j] != table[j][i]){
					flag = false;
					break;
				}
			}
			else if(table[i][j] == table[j][i]){
				flag = false;
			}
		}
		if(!flag)	break;
	}

	cout << ((flag)?"correct":"incorrect") << endl;
    return 0;
}
