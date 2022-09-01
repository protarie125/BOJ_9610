#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto q1 = int{ 0 };
	auto q2 = int{ 0 };
	auto q3 = int{ 0 };
	auto q4 = int{ 0 };
	auto ax = int{ 0 };
	while (0 < (n--)) {
		auto x = int{};
		auto y = int{};
		cin >> x >> y;

		if (0 == x || 0 == y) {
			++ax;
		}
		else if (0 < x && 0 < y) {
			++q1;
		}
		else if (x < 0 && 0 < y) {
			++q2;
		}
		else if (x < 0 && y < 0) {
			++q3;
		}
		else {
			++q4;
		}
	}

	cout << "Q1: " << q1 << '\n';
	cout << "Q2: " << q2 << '\n';
	cout << "Q3: " << q3 << '\n';
	cout << "Q4: " << q4 << '\n';
	cout << "AXIS: " << ax << '\n';

	return 0;
}