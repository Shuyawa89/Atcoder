#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define irep(i, n) for (int i = 0; i <= n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)

// int cal_digit(int input){
// 	int digit;
// 	for(digit = 0;input > 0;digit++,input /= 10);
// 	return digit;
// }

int digit_sum(int input){
	int sum=0;
	while(input > 0){
		sum += input % 10;
		input /= 10; 
	}
	return sum;
}


int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	int count=0;
	irep(i,n){
		int sum = digit_sum(i);
		if(a <= sum && sum <= b){
			count += i;
		}
	}
	cout << count << endl;
    return 0;
}
