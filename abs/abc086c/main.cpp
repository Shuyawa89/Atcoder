#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)

int main()
{
	int n; cin >> n;
	int bx,ax,by,ay,bt;
	bool flag = true;
	bx=by=bt=0;

	rep(i,n){
		int at;
		cin >> at >> ax >> ay;
		if(((at-bt)-(ax-bx)-(ay-by))%2 == 0 && ((at-bt) >= (abs(ax-bx)+abs(ay-by)))){
			//cout << "xy distance : " << (ax - bx) << " " << (ay - by) << endl;
			bt = at; bx = ax; by = ay;
		}
		else{
			//cout << "xy distance : " << (at - bt) << " " << (ax - bx) << " " << (ay - by) << endl;
			flag = false;
			break;
		}
	}

	cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
