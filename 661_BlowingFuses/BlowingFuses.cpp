#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main(){
	int n,m,c,maxP,currP;
	int seq = 1;
	while(cin >> n >> m >> c, n||m||c){
		maxP = 0;
		currP = 0;
		vector<pair<int,bool>> devices(n,make_pair(0,0));
		for(int i = 0; i < n; i++){
			cin >> devices[i].first;
		}
		while(m--){
			int temp;
			cin >> temp;
			currP += devices[temp-1].second?-devices[temp-1].first:devices[temp-1].first;
			devices[temp-1].second = !devices[temp-1].second;
			maxP = maxP<currP?currP:maxP;
		}
		cout << (maxP>c?"Sequence " + to_string(seq) + '\n' + "Fuse was blown.\n":"Sequence " + to_string(seq) + '\n' + "Fuse was not blown.\nMaximal power consumption was "+to_string(maxP)+" amperes.\n") << '\n';
		seq++;
	}
}
