#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;

	for (int i = 1; i <= tc; ++i){
		int maxS = INT32_MIN, num, students;;
		string line;

		cin >> students;
		while (students--){
			cin >> num;
			maxS = (num > maxS ? num : maxS);
		}
		cout << "Case " << i << ": " << maxS << "\n";
	}

	return 0;
}
