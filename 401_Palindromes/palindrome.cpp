#include <iostream>
#include <map>
#include <cmath>

using namespace std;

map<char, char> mirror = {
    {'A', 'A'},{'E', '3'},{'H', 'H'},{'I', 'I'},
    {'J', 'L'},{'L', 'J'},{'M', 'M'},{'O', 'O'},
    {'S', '2'},{'E', '3'},{'T', 'T'},{'U', 'U'},
    {'V', 'V'},{'W', 'W'},{'X', 'X'},{'Y', 'Y'},
    {'Z', '5'},{'1', '1'},{'2', 'S'},{'3', 'E'}, 
    {'5', 'Z'}, {'8', '8'}};

bool isMirror(string word){
    for(int i = 0; i < ceil(word.length()/2.0); ++i){
        if (!mirror.count(word[i]) || !mirror.count(word[word.size() - 1 - i])) return false; 
        if (word[i] != mirror[word[word.size() - 1 - i]]) return false;
    }
    return true;
}

bool isPalindrome(string word){
    for(int i = 0; i < ceil(word.length()/2.0); ++i){
        if (word[i] != word[word.size() - 1 - i]) return false;
    }
    return true;
}

int main() {

    string word;

    while(cin >> word){
        bool isM = isMirror(word), isP = isPalindrome(word);
        cout << word;
        if (isM){
            if (isP) cout << " -- is a mirrored palindrome.";
            else cout << " -- is a mirrored string.";
        }else if (isP){
            cout << " -- is a regular palindrome.";
        }else{
            cout << " -- is not a palindrome.";
        }
        cout << endl << endl;
    }

    return 0;
}