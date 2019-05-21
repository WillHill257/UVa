#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	
	int count = 0;
	string word;
	cin >> word;
	while (word != "#"){
		cout << "Case " << ++count << ": ";
		if (word == "HELLO") cout << "ENGLISH\n";
		else if (word == "HOLA") cout << "SPANISH\n";
		else if (word == "HALLO") cout << "GERMAN\n";
		else if (word == "BONJOUR") cout << "FRENCH\n";
		else if (word == "CIAO") cout << "ITALIAN\n";
		else if (word == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		else cout << "UNKNOWN\n";
		cin >> word;
	}

	return 0;
}
