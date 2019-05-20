#include <iostream>
#include <map>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int months, numDeps;
	double loan, downPay;

	cin >> months;
	while (months >= 0){
		map<int, double> dep;

		cin >> downPay >> loan >> numDeps;

		double carVal = loan + downPay;

		while (numDeps--){
			int month;
			cin >> month;
			cin >> dep[month];
		}

		//det car value after driving off the lot
		carVal = carVal*(1 - dep[0]);
		
		int month = 0, depMonth = 0;
		double repayments = loan/months;

		while (loan > carVal){
			++month;
		
			if (dep.find(month) != dep.end()){
				depMonth = month;
			}
			carVal = carVal*(1 - dep[depMonth]);
			loan -= repayments;
		}
		cout << month << " month" << (month != 1 ? "s\n" : "\n");
		cin >> months;		
	}


	return 0;
}
