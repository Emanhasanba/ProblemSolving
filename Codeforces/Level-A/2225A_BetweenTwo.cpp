/*
 * Problem: A. Number Between Two Others
 * Contest: Codeforces Round 2225 (Div. 2)
 * URL: https://codeforces.com/problemset/problem/2225/A
 * ---------------------------------------------------------
 * Logic: Check if there is a multiple of X between X and Y.
 * If Y/X > 2, it confirms the existence of a valid integer.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 * ---------------------------------------------------------
 * Note: long long used for 64-bit precision (up to 10^18).
 */

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long k = y / x;

        if (k == 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}