#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    int H, D, F;
    double U;
    cin >> H >> U >> D >> F;
    while (H||U||D||F){
        int day = 1;
        double snailHeight, lossU = F*U/100;
	snailHeight = (U > H ? U : U - D);
        while (snailHeight < H && snailHeight >= 0){
            ++day;
            //day
            U -= lossU;
            if (U > 0) snailHeight += U;
            if (snailHeight > H) break;
            //night
            snailHeight -= D;
        }
        cout << (snailHeight >= 0 ? "success" : "failure") << " on day " << day << "\n";
        cin >> H >> U >> D >> F;
    }

    return 0;
}
