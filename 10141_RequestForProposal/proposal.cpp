#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int numReq, prop, num = 0;
    cin >> numReq >> prop;
    string temp;

    while (numReq||prop){
        string name, bestName;
        double price, bestPrice = __DBL_MAX__;
        int metReq, bestMet = INT32_MIN;
        cin.ignore(100, '\n');
        ++num;
        //pass over requirements
        for (int i = 0; i < numReq; ++i){
            getline(cin, temp);
        }

        for (int i = 0; i < prop; ++i){
            getline(cin, name);
            cin >> price >> metReq;
            cin.ignore(100, '\n');

            //pass over met requirements
            for (int j = 0; j < metReq; ++j){
                getline(cin, temp);
            }

            if ((metReq > bestMet) || (metReq == bestMet && price < bestPrice)){
                bestMet = metReq;
                bestName = name;
                bestPrice = price;
            }
        }
        cout << "RFP #" << num << "\n" << bestName << "\n";
        cin >> numReq >> prop;
        if (numReq||prop) cout << '\n';
    }

    return 0;
}