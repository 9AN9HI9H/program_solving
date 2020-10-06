/**
 * https://www.acmicpc.net/problem/14889
 * 
 * BOJ 14889 - 스타트와 링크
 * 
 * 입력 : 모인 사람 수 N (4 <= N <= 20), 능력치 S[1..N][1..N] (1 <= S[i][j] <= 100)
 * 출력 : 스타트 팀과 링크 팀의 능력치의 차이의 최솟값
 **/

#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;

vvi status;
vi team_start, team_link;
vb picked;
int n, diff = 1e9;

void get_diff() {
    int answer = 0;

    for (int i = 0; i < n / 2; i++)
        for (int j = i + 1; j < n / 2; j++)
            answer += status[team_start[i]][team_start[j]];
    
    for (int i = 0; i < n / 2; i++)
        for (int j = i + 1; j < n / 2; j++)
            answer -= status[team_link[i]][team_link[j]];

    if (answer < 0) answer = -answer;
    if (diff > answer) diff = answer;

    return;
}

void combination(int x = 0, int cnt = 0) {
    if (cnt < n / 2) {
        for (int i = x + 1; i < n; i++) {
            team_start[cnt] = i;
            picked[i] = true;
            combination(i, cnt + 1);
            picked[i] = false;
        }
    } else {
        for (int i = 0, idx = 0; i < n; i++)
            if (!picked[i]) team_link[idx++] = i;
        get_diff();
    }
}

void solve() {
    cin >> n;
    
    status.resize(n, vi(n, 0));
    team_start.resize(n);
    team_link.resize(n);
    picked.resize(n, false);

    int stat;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> stat;
            if (i < j) status[i][j] += stat;
            else if (i > j) status[j][i] += stat;
        }
    }

    combination();
    cout << diff;

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
