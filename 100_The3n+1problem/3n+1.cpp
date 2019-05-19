#include <iostream>
#include <map>

using namespace std;

map<int, int> memo;

int cycleLength(int num){
    if (num == 1){
        return 1;
    }else if (memo.find(num) != memo.end()) {
        return memo[num];
    }else{
        int temp = num % 2 == 0 ? num/2 : 3*num + 1;
        memo[num] = 1;
        memo[num] += cycleLength(temp);
        return memo[num];
    }
}

int main() {

    int k, j;

    while (cin >> k >> j) {
        int maxCycle = INT32_MIN;
        cout << k << " " << j << " ";
        if (k > j){
            k = k ^ j;
            j = k ^ j;
            k = k ^ j;
        }
        for (int i = k; i <= j; ++i) {
            int temp = cycleLength(i);
            maxCycle = temp > maxCycle ? temp : maxCycle;
        }
        cout << maxCycle << endl;
    }

    return 0;
}