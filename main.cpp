#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

string seek, str;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (true) {
		cin >> seek;

		if ("#" == seek) {
			break;
		}

		getline(cin, str);

		auto ans = int{ 0 };
		for (const auto& x : str) {
			if (x == seek[0] || x - 'A' + 'a' == seek[0]) {
				++ans;
			}
		}

		cout << seek << ' ' << ans << '\n';
	}

	return 0;
}