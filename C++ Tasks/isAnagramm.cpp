#include <iostream>
#include <string>
using namespace std;


void sort_string(string &str){
	int len = str.length();

	for (int i = 1; i < len; i++) {
		for (int j = i; j > 0 && str[j - 1] > str[j]; j--) {
			char t = str[j - 1];
			str[j - 1] = str[j];
			str[j] = t;
		}
	}
}

void isAnagramm() {


	string word1, word2;

	cout << "Word 1 = ";
	cin >> word1;

	cout << "Word 2 = ";
	cin >> word2;

	if (word1.length() == word2.length()) {

		sort_string(word1);
		sort_string(word2);

		if (word1 == word2) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

	}
	else {
		cout << "NO";
	}

}

/*
int main() {

	IsAnagramm();

	return 0;
}
*/
