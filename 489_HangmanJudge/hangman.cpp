#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    string correctStr, guessStr;
    int round;

    while (cin >> round, round != -1){
        int wrong = 0, right = 0;
        cin >> correctStr >> guessStr;
        cout << "Round " << round << endl;
        unordered_set<char> correct, guess;
        for(char c : correctStr)
            correct.insert(c);

        for(char c : guessStr){
            if (!guess.count(c)){
                if (correct.count(c)) right++;
                else wrong++;
                guess.insert(c);

                if (wrong == 7) {
                    cout << "You lose." << endl;
                    break;
                }else if (right == correct.size()) {
                    cout << "You win." << endl;
                    break;
                }
            }
        }
        if ((wrong != 7) && (right != correct.size())) cout << "You chickened out." << endl;

    }

    return 0;
}