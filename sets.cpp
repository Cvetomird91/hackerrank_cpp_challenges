#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

const int addToSet = 1;
const int deleteFromSet = 2;
const int checkIfExists = 3;

const string pos = "Yes";
const string neg = "No";

int main() {

    int n, value, opcode;
    cin >> n;
    set<int> vals;
    string query;

    cin.ignore(1, '\n');

    for (int i = 0; i < n; i++) {
    	getline(cin, query);
    	stringstream ss(query);
		ss >> opcode >> value;

        if (opcode == addToSet) {
            vals.insert(value);
            continue;
        }

        if (opcode == deleteFromSet) {
            vals.erase(value);
            continue;
        }

        if (opcode == checkIfExists) {

			if(vals.find(value) != vals.end())
				cout << pos << endl;

			if(vals.find(value) == vals.end())
				cout << neg << endl;

        }

    }

    return 0;

}
