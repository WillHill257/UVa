#include <iostream>

using namespace std;

int main() {

    int tc;
    cin >> tc;

    while(tc--){
        long long s, d;
        double first, second;
        cin >> s >> d;

        first = (s - d)/2.0;
        second = (s + d)/2.0;
        if (first < 0 || second < 0 || first != int(first) || second != int(second)) cout << "impossible" << endl;
        else if (first >= second) cout << long(first) << " " << long(second) << endl;
        else cout << long(second) << " " << long(first) << endl;
    }

    return 0;
}