/**
 * https://www.acmicpc.net/problem/2108
 * 
 * BOJ 2108 - 통계학
 * 
 * 입력 : 수의 개수 N (1 <= N <= 500,000, N은 홀수), N개의 정수 A[1..N] (|A[i]| <= 4,000)
 * 출력 : 주어진 수의 산술평균, 중앙값, 최빈값(중 두 번째로 작은 값), 범위
 * 구현 : map의 first가 정렬된다는 특성을 이용하여 counting sort 구현
 **/

#include <iostream>
#include <map>
using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;

int get_mean(mii& arr, int n) {
    int sum = 0;
    for (pii p : arr)
        sum += p.first * p.second;
    int ret = (int)((double)(sum > 0 ? sum : -sum) / n + 0.5);
    ret = (sum > 0 ? ret : -ret);
    return ret;
}

int get_median(mii& arr, int n) {
    int target = (n + 1) / 2, cnt = 0, ret;
    for (pii p : arr) {
        cnt += p.second;
        if (cnt >= target) {
            ret = p.first;
            break;
        }
    }
    return ret;
}

int get_mode(mii& arr) {
    int ret, max = 0;
    bool first = true;
    for (pii p : arr) {
        if (max < p.second) {
            ret = p.first;
            max = p.second;
            first = true;
        } else if (max == p.second && first) {
            ret = p.first;
            first = false;
        }
    }
    return ret;
}

int get_range(mii& arr) { return (arr.rbegin()->first - arr.begin()->first); }

void solve() {
    int n, temp;
    mii arr;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp]++;
    }
    cout << get_mean(arr, n) << '\n' << get_median(arr, n) << '\n'
         << get_mode(arr) << '\n' << get_range(arr);

    return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
