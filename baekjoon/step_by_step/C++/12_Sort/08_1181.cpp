/**
 * https://www.acmicpc.net/problem/1181
 * 
 * BOJ 1181 - 단어 정렬
 * 
 * 입력 : 단어의 개수 N (1 <= N <= 20,000), 알파벳 소문자로 이루어진 단어 S[1..N] (len(S[i]) <= 50)
 * 출력 : 단어의 길이가 짧은 것 부터, 길이가 같으면 사전 순으로 정렬한 단어들
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
    for (int i = 0; i < n; i++) {
        cin >> dict[i].second;
        dict[i].first = dict[i].second.length();
    }
    sort(dict.begin(), dict.end());
    auto it = unique(dict.begin(), dict.end());
    dict.erase(it, dict.end());
    for (pis i : dict)
        cout << i.second << '\n';
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
