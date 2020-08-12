/**
 * https://www.acmicpc.net/problem/10814
 * 
 * BOJ 10814 - 나이순 정렬
 * 
 * 입력 : 회원의 수 N (1 <= N <= 100,000), 회원들의 나이 A[1..N]와 이름 S[1..N] (A[i] <= 200, len(S[i]) <= 100)
 * 출력 : 나이가 적은 사람부터, 나이가 같으면 가입한 순으로 정렬한 나이와 이름
 **/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using pis = pair<int, string>;

void solve() {
    int n;
    vector<pis> dict;
    
    cin >> n;
    dict.resize(n);
    for (int i = 0; i < n; i++)
        cin >> dict[i].first >> dict[i].second;
    stable_sort(dict.begin(), dict.end(), [](pis& a, pis& b) { return a.first < b.first; });
    for (pis i : dict)
        cout << i.first << ' ' << i.second << '\n';
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
