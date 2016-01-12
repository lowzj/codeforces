#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int t[3][5000];
	int len[3] = {0};
	int n, tmp;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		t[tmp-1][len[tmp-1]++] = i;
	}

	int l = min(min(len[0], len[1]), len[2]);

	cout << l << endl;
	for (int i = 0; i < l; ++i) {
		cout << t[0][i] << " " << t[1][i] << " " << t[2][i] << endl;
	}
	return 0;
}
