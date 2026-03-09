#include <bits/stdc++.h>
using namespace std;
bool bsearch(int k, const vector<int>& cnt) {
    int c0 = cnt[0], c1 = cnt[1];
    int c05 = 0;
    for (int d = 0; d <= 5; d++) 
      c05 += cnt[d];
    int L = max(0, k - c0);
    int R = min({k, c1, c0 + c1 - k, c05 - 2 * k});
    return L <= R;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> cnt(10, 0);
        for (char ch : s) 
          cnt[ch - '0']++;

        int left = 0, right = n / 4, ans = 0;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (bsearch(mid, cnt)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
