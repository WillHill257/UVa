#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int sumName(string name){
    int sum = 0;
    for (char c : name){
        c = toupper(c);
        if ('A' <= c && c <= 'Z'){
            sum += c - 'A' + 1;
        }
    }
    while (sum/10 != 0){
        string num = to_string(sum);
        sum = 0;
        for (char c : num){
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);

    cout << setprecision(2) << fixed;
    string name1, name2;
    while(getline(cin, name1)){
        getline(cin, name2);
        int sum1 = sumName(name1);
        int sum2 = sumName(name2);
        if (sum1 > sum2){
            sum1 = sum1 + sum2;
            sum2 = sum1 - sum2;
            sum1 = sum1 - sum2;
        }
        cout << (sum1*1.0)/sum2*100 << " %\n"; 
    }

    return 0;
}