#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(char a, char b){
    if (toupper(a) == toupper(b)) return a < b;
    return toupper(a) < toupper(b);
}

int main() {

    int tc;
    string word;

    cin >> tc;

    while(tc--){
        cin >> word;
        sort(word.begin(), word.end(), compare);
        cout << word << endl;
        while(next_permutation(word.begin(), word.end(), compare)){
            cout << word << endl;
        }
    }

    return 0;
}