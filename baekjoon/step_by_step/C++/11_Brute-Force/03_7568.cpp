/**
 * https://www.acmicpc.net/problem/7568
 * 
 * BOJ 7568 - 덩치
 * 
 * 입력 : 전체 사람의 수 N (2 <= N <= 50), N명의 몸무게와 키 X[1..N], Y[1..N] (10 <= X, Y <= 200)
 * 출력 : 덩치 등수를 입력된 순서대로 출력
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

void solve() {
	int n; cin >> n;
	vi weight(n), height(n);

	for (int i = 0; i < n; i++)
		cin >> weight[i] >> height[i];

	for (int i = 0; i < n; i++) {
		int grade = 1;

		for (int j = 0; j < n; j++)
			if (weight[i] < weight[j] && height[i] < height[j])
				grade++;

		cout << grade << ' ';
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
