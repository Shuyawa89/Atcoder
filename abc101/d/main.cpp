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
	int K;
    cin >> K;
    int sum = 0,Kd = K;
    while(Kd != 0){
        sum += Kd%10;
        Kd /= 10;
    }
    for(int i=1;i<=K;++i){
        if((double(K)/sum) <= (double((K+1))/(sum+1)))
            cout << i << endl;
    }
    return 0;
}
