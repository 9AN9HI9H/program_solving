/**
 * https://www.acmicpc.net/problem/9251
 * 
 * BOJ 9251 - LCS
 * 
 * 입력 : 알파벳 대문자로만 이루어진 두 문자열 S, T (1 <= |S|, |T| <= 1000)
 * 출력 : 주어진 두 문자열의 LCS(최장 공통 부분 수열)의 길이
 **/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

void solve() {
    string s, t;

    cin >> s >> t;
    int sz_s = (int)s.size(), sz_t = (int)t.size();
    vvi memo(sz_s + 1, vi(sz_t + 1, 0));

    for (int i = 1; i <= sz_s; i++) {
        for (int j = 1; j <= sz_t; j++) {
            if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[sz_s][sz_t];
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
