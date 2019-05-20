#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;

	for (int i = 1; i <= tc; ++i){
		int num, max1 = INT32_MIN, max2 = INT32_MIN;
		for (int j = 0; j < 3; ++j){
			cin >> num;
			if (num > max1){
				max2 = max1;
				max1 = num;
			}else if (num > max2){
				max2 = num;
			}
		}
		cout << "Case " << i << ": " << max2 << endl;
	}

	return 0;
}
