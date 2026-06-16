#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    long long low = 0, high = 1e18;

    while (low < high) {
        long long mid = low + (high - low) / 2;

        long long products = 0;
        for (long long x : k) {
            products += mid / x;
            if (products >= t) break; 
        }

        if (products >= t)
            high = mid;
        else
            low = mid + 1;
    }

    cout << low << '\n';

    return 0;
}
