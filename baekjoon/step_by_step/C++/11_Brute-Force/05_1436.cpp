/**
 * https://www.acmicpc.net/problem/1436
 * 
 * BOJ 1436 - 영화감독 숌
 * 
 * 입력 : 숫자 N (1 <= N <= 10000)
 * 출력 : N번째 영화의 제목에 들어간 수
 **/

#include <iostream>
using namespace std;

bool check_666(int n) {
	do if(n % 1000 == 666) return true;
	while(n /= 10);
	return false;
}

void solve() {
	int n, i;

	cin >> n;
	for (i = 666; n; i++)
		if (check_666(i)) n--;
	cout << i - 1;

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
