/**
 * https://www.acmicpc.net/problem/2231
 * 
 * BOJ 2231 - 분해합
 * 
 * 입력 : 자연수 N (1 <= N <= 1e6)
 * 출력 : N의 가장 작은 생성자 혹은 0 (생성자가 없음)
 **/

#include <iostream>
using namespace	std;

int num_of_digit(int n) {
	int ret = 1;
	while (n /= 10) ret++;
	return ret;
}

int sum_of_digit(int n) {
	int ret = n % 10;
	while (n /= 10) ret += n % 10;
	return ret;
}

void solve() {
	int n, answer = 0;

	cin >> n;
	for (int i = n - num_of_digit(n) * 9; i < n; i++) {
		if (n == i + sum_of_digit(i)) {
			answer = i;
			break;
		}
	}
	cout << answer;

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}