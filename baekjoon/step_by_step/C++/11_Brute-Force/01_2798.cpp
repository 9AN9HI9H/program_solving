/**
 * https://www.acmicpc.net/problem/2798
 * 
 * BOJ 2798 - 블랙잭
 * 
 * 입력 : 카드의 개수 N, 정수 M (3 <= N <= 100, 10 <= M <= 3e5),
 *		  N개의 카드에 쓰인 수 A[1..N] (1 <= A[i] <= 1e5)
 * 출력 : 조건에 맞는 세 카드에 적힌 수의 합
 **/

#include <iostream>
using namespace std;

void solve() {
	int n, m, sum, answer = -1;
	int card[101];

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> card[i];
	for (int i = 0; i < n; i++) {
		for (int j = j + 1; j < n; j++) {
			for (int k = j + 1; k < n; ++k) {
				sum = card[i] + card[j] + card[k];
				if (answer < sum && sum <= m)
					answer = sum;
			}
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
