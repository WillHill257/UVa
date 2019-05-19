#include <iostream>
#include <vector>

using namespace std;

size_t binSearch(vector<size_t> &pos, size_t num) {
  size_t lower = 0, upper = pos.size() - 1, mid;
  while (lower <= upper) {
    mid = (lower + upper) / 2;
    int element = pos[mid];
    if (element == num)
      return mid;
    else if (element < num)
      lower = mid + 1;
    else
      upper = mid - 1;
  }
  return upper;
}

int main() {
  string bin;
  int tc = 1, n, first, second;
  while (getline(cin, bin) && !bin.empty()) {
    // Read in binary string into subsets;
    vector<size_t> pos(1, 0);
    for (size_t i = 1; i < bin.length(); i++) {
      if (bin[i] != bin[i - 1]) {
        pos.push_back(i);
      }
    }
    pos.push_back(bin.length());

    cout << "Case " << tc << ":\n";

    cin >> n;
    while (n--) {
      cin >> first >> second;
      // swap if smaller
      if (second < first) {
        first = first ^ second;
        second = first ^ second;
        first = first ^ second;
      }

      if (second >= pos[binSearch(pos, first) + 1])
        cout << "No\n";
      else
        cout << "Yes\n";
    }

    tc++;
    cin.get();
  }
}
