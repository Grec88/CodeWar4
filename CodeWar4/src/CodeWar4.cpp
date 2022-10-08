//============================================================================
// Name        : CodeWar4.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string likes(const vector<string> &names) {
	string ans;
	size_t size = names.size();
	if (size == 0) {
		ans += "no one likes this";
	}
	if (size == 1) {
		ans += names[0] + " likes this";
	}
	if (size == 2) {
		ans += names[0];
		ans += " and " + names[1] + " likes this";
	}
	if (size == 3) {
		ans += names[0];
		ans += ", " + names[1];
		ans += " and " + names[2] + " likes this";
	} else if(size > 3) {
		ans += names[0];
		ans += ", " + names[1] + " and " + to_string(size - 2)
				+ "  others likes this";
	}
	return ans;
}

int main() {
	cout << likes({}) << endl; // prints !!!Hello World!!!
	return 0;
}
