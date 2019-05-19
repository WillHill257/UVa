#include <iostream>
#include <vector>

using namespace std;

int main() {

    int B, N;
    cin >> B >> N;

    while (B&&N) {
        vector<int> bank(B);
        for (int i = 0; i < B; ++i){
            cin >> bank[i];
        }
        for (int i = 0; i < N; ++i) {
            int D, C, V;
            cin >> D >> C >> V;
            bank[--D] -= V;
            bank[--C] += V;
        }
        bool can = true;
        for (int i = 0; i < B; ++i){
            if (bank[i] < 0){
                can = false;
                break;
            }
        }
        if (can){
            cout << 'S' << endl;
        }else{
            cout << 'N' << endl;
        }

        cin >> B >> N;
    }

    return 0;
}