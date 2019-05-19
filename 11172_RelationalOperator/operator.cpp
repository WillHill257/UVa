#include <iostream>

using namespace std;

int main() {
	
	int tc, f, s;
	cin >> tc;

	while (tc--){
		cin >> f >> s;
		if (f == s) cout << "=\n";
		else if (f > s) cout << ">\n";
		else cout << "<\n";	
	}

	return 0;
}
