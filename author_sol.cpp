#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int res = 0;
		for (int i = 0; i < n; i++) {
			int w;
			cin >> w;
			// compare current maximum to the current 'w' + 'i'
			// we add the current index 'i' to the current value of 'w'
			// in order to find out if the maximum that we've chosen will
			// be able to reach the last element without failing the conditions
			// if the current maximum fails the conditions until the end, then
			// it means that the minimum velocity that we need is the last element
			// plus the its index (the number that is needed to be added to it in order
			// to pass all the needed conditions)
			res = max(res, w + i);
		}
		cout << res << '\n';
	}
	return 0;
}
