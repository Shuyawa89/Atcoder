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
	int N,K;
    cin >> N >> K;
    //cout << "scannum N : " << N << "  K : " << K <<  endl;
    double sum = 0.0;
    for(int i = 1;i <= N;++i){
        int ii = i;
        double n = 1.0;
        //cout << n << endl;
        while(ii < K){
            ii *= 2;
            n /= 2.0;
        }
        //cout << N << endl;

        sum += (1.0/N) * n;
    }
    printf("%.10f",sum);
    //cout << sum << endl;
    return 0;
}
