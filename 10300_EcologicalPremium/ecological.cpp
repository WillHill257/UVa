#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;

	while(tc--){
		int farmers, sum = 0;
		cin >> farmers;
		while(farmers--){
			int num1, num2;
			cin >> num1 >> num2 >> num2;
			sum += num1*num2;
		}
		cout << sum << "\n";
	}

	return 0;
}
