#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int tc; 
	cin >> tc;

	while(tc--){
		int N, max = INT32_MIN, min = INT32_MAX;
		cin >> N;
		while(N--){
			int n;
			cin >> n;
			max = n > max ? n : max;
			min = n < min ? n : min;
		}
		cout << 2*(max - min) << '\n';
	}
	return 0;
}
