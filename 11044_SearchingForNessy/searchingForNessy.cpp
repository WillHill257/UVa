#include <iostream>
#include <cmath>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;

	while(tc--){
		int n, m;
		cin >> n >> m;
		cout << fixed << (int)(ceil((n - 2)/3.0) * ceil((m - 2)/3.0)) << "\n";
	}
	
	return 0;
}
