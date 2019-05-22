#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;

	while(tc--){
        vector<vector<char> > grid;
		int m, n, rStart, cStart;
		cin >> m >> n;
		//setup grid and determine start position
		for(int j = 0; j < m; ++j){
			string line;
			cin >> line;
			vector<char> temp;
			for(int i = 0; i < n; ++i){
				temp.push_back(line[i]);
				if (line[i] == '@'){
					rStart = j;
					cStart = i;	
				}
			}
			grid.push_back(temp);
		}
		string word = "IEHOVA#";
		for(int i = 0; i < 7; ++i){
			int pos = find(grid[rStart].begin(), grid[rStart].end(), word[i]) - grid[rStart].begin();
			if (pos != grid[rStart].end() - grid[rStart].begin()){
				cout << (pos > cStart ? "right" : "left");
				cStart = pos;
			}else{
				cout << "forth";
				--rStart;
			}
			if (i < 6) cout << " ";
		}
		cout << '\n';
	}

	return 0;
}
