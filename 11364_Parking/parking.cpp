#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i){
        int n, sum = 0, mid;
        cin >> n;
        vector<int> pos;
        for (int j = 0; j < n; ++j) {

            int num;
            cin >> num;
            sum += num;
            pos.push_back(num);
        }
        mid = round((1.0*sum)/n);
        sort(pos.begin(), pos.end());
        sum = mid - pos[0];
        for (int j = 1; j < pos.size(); ++j){
            sum += pos[j] - pos[j - 1];
        }
        sum += pos[pos.size() - 1] - mid;
        cout << sum << endl;
    }


    return 0;
}