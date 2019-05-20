#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		cout << abs((((int)(((n*567/9.0) + 7492)*235/47.0 - 498)/10)%10)) << "\n";		
	}
	return 0;
}
