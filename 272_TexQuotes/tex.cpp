#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	string line;
	bool isFirst = true;

	while (getline(cin, line)){
		int pos = line.find('"');
		while (pos != string::npos){
			line.erase(pos, 1);
			if (isFirst){
				line.insert(pos, "``");
			}else{
				line.insert(pos, "''");
			}

			isFirst = !isFirst;
			pos = line.find('"');
		//	cout << line << " " << pos << endl;
		}
		cout << line << "\n";
	}

	return 0;
}




























































