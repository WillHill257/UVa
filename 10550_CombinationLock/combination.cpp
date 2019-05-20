#include <iostream>
#include <cmath>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	//each number rotation is 9 degrees
	int start, num1, num2, num3;
	cin >> start >> num1 >> num2 >> num3;
	while(start || num1 || num2 || num3){
		cout << 1080 + 9*((start - num1 + 40)%40 + (num2 - num1 + 40)%40 + (num2 - num3 + 40)%40) << "\n";
		cin >> start >> num1 >> num2 >> num3;
	}	
	return 0;
}
