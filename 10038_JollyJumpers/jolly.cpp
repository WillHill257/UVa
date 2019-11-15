#include <iostream>
#include <set>

using namespace std;

int main(){

    int n;

    while(cin >> n){
        set<int> differences;
        int numDiff = n - 1, current, next;
        cin >> current;
        n--;
        while(n--){
            cin >> next;
            int diff = abs(current - next);
            if (diff <= numDiff && diff >= 1) differences.insert(diff);
            current = next;
        }
        if (differences.size() == numDiff) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }

    return 0;
}
