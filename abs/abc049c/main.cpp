#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)


int main()
{
	string s,ans; cin >> s; ans = "";
	vector<string> a{"dream","dreamer","erase","eraser"};

	int point = 2;
	bool flag = true;

	//文字を伸ばしていく
	while(s.size() >= ans.size() && flag){
		
		switch(s[point]){
			case 'e':
				ans += "dream";
				point += 5;
				break;
			case 'a':
				ans += "erase";
				point += 5;
				break;
			case 'r':
				ans += "r";
				point += 1;
				break;
			default:
				flag = false;
		}
	}

	//解答部分
	if(s==ans)	cout << "YES" << endl;
	else cout << "NO" << endl;

    return 0;
}
