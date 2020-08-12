/**
 * https://www.acmicpc.net/problem/1018
 * 
 * BOJ 1018 - 체스판 다시 칠하기
 * 
 * 입력 : 보드의 크기를 표현하는 N과 M (8 <= N, M <= 50)
 * 출력 : 다시 칠해야 하는 정사각형 개수의 최솟값
 **/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int make_bw(vvi& board, int x, int y) {
	int ret = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if ((i + j + board[x + i][y + j]) % 2 == 0)
				ret++;
	
	return ret;
}

int make_wb(vvi& board, int x, int y) {
	int ret = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if ((i + j + board[x + i][y + j]) % 2 == 1)
				ret++;
	
	return ret;
}

int make_chessboard(vvi& board, int n, int m) {
	int bw, wb, ret = 65;

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			bw = make_bw(board, i, j);
			if (ret > bw) ret = bw;
			wb = make_wb(board, i, j);
			if (ret > wb) ret = wb;
		}
	}

	return ret;
}

void solve() {
	string input;
	int n, m; cin >> n >> m;
	vvi board(n, vi(m, 0));

	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < m; j++) {
			if (input[j] == 'W') board[i][j] = 0;
			else board[i][j] = 1;
		}
	}
	cout << make_chessboard(board, n, m);

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
