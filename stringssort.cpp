#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){

	string str;
	vector<string> STR;

	cout << "Strings number: " << endl;

	while (cin >> str){
		STR.push_back(str);
	}
		
	sort(STR.begin(), STR.end());

	for (int i = 0; i < STR.size(); i++){
		cout << STR[i] << " ";
	}
		
	return 0;
}