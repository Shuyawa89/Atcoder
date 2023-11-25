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
	int count=0;
	bool flag = true;
	vector<int> inputs(n);

	//入力
	rep(i,n) cin >> inputs[i];

	while(flag){
		rep(i,n){
			if(inputs[i]%2==0)
				inputs[i] /= 2;
			else{
				flag = false;
				break;
			}
		}
		count++;
	}
	cout << count-1 << endl;
    return 0;
}
