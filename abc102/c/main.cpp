#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
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
	int N;
    ll sad=0;
    cin >> N;

    vl input(N);
    //cout << N << endl;
    rep(i,N){
        cin >> input[i];
        input[i] = input[i] - i + 1;
        //cout << input[i]  << "debug" << endl;
    }

    sort(input.begin(),input.end());
    //cout << "Sorted" << endl;
    ll mean = input[N/2];
    //cout << "mean : " << mean << endl;
    rep(i,N){
        sad += abs(input[i] - mean);
    }
    cout << sad << endl;
    return 0;
}
