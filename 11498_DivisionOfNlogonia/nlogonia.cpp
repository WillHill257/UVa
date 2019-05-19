#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	
	int K, n, m, x, y;
	cin >> K;

	while (K){
		cin >> n >> m;	
		while (K--){
			cin >> x >> y;
			if (x == n || y == m) cout << "divisa\n";
			else if (x < n && y > m) cout << "NO\n";
			else if (x < n && y < m) cout << "SO\n";
			else if (x > n && y > m) cout << "NE\n";
			else cout << "SE\n";
		}
		cin >> K;
	}

	return 0;
}
