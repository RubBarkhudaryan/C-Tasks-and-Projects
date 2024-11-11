#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool BracketCount(string str) {

	int leftCount = count(str.begin(), str.end(), '(');
	int rightCount = count(str.begin(), str.end(), ')');

	if (leftCount == rightCount) {
		string openBrackets = "";

		for (auto c : str) {
			if (c == '(') {
				openBrackets += c;
			}
			else if (c == ')') {
				if (!openBrackets.empty() && openBrackets.back() == '(') {
					openBrackets.pop_back();
				}
			} 
		}

		return openBrackets.empty();
		
	}
	else {
		return false;
	}


}

/*
int main() {
	
	string str;

	cin >> str;

	if (BracketCount(str)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


	return 0;
}
*/
