#include <iostream>

using namespace std;

int main() {
	
	int N, B, H, W;

	while (cin >> N >> B >> H >> W){ 
		int minP = INT32_MAX;
		while(H--){
			int price, numBeds;
			cin >> price;
            int cost = price*N;
			for (int i = 0; i < W; ++i){
				cin >> numBeds;
				if ((numBeds >= N) && (cost <= B) && (cost < minP)) minP = cost;
			}
		}
		if (minP != INT32_MAX) cout << minP << "\n";
		else cout << "stay home\n";
	}

	return 0;
}
