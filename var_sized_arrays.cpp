#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

typedef vector< vector<int> > jaggedArray;

/*
    get number of arrays and queries
    get array strings and store them in arrayNumbers[]
    get queries and store them in queries[]
    create dynamicMatrix
    for each array string create a vector<int> with createVectorArray and fill dynamicMatrix
        with the output
    for each query string parse the integers from it and output the jagged array element
*/

vector<int> createVectorArray(string str) {
    int numbersCount;
    vector<int> temp;

    string token;
    stringstream ss(str);

    while(getline(ss, token, ' ')) {
        temp.push_back(stoi(token));
    }

    numbersCount = temp.at(0);
    vector<int> numbers(numbersCount);
    vector<int>::iterator it;

    int ind = 0;
    for (std::vector<int>::const_iterator i = temp.begin() + 1; i !=  temp.end(); ++i) {
        numbers[ind] = *i;
        ind++;
    }
    return numbers;

}

void fillJaggedArray(string str[], jaggedArray& matrix) {

}

int queryJaggedArray(string query, const jaggedArray& matrix) {
    int pos[2];
    int col, row;

    cin >> col >> row;
    cout << matrix[col][row] << endl;
}

int main() {

	unsigned int arrayCount;
	unsigned int queryCount;

    cin >> arrayCount >> queryCount;
	jaggedArray matrix;
	matrix.reserve(arrayCount);

	string arrayNumbers[arrayCount];
	string queries[queryCount];

    cin.ignore(1, '\n');

    for (int i; i < arrayCount; i++) {
        getline(cin, arrayNumbers[i]);
        vector<int> temp = createVectorArray(arrayNumbers[i]);
        matrix.push_back(temp);
    }

    for (int i = 0; i < queryCount; i++) {
        getline(cin, queries[i]);
    }

    for (int i = 0; i < queryCount; i++) {
        int col, row;
        stringstream ss(queries[i]);
        ss >> col >> row;

        cout << matrix[col][row] << endl;
    }

	return 0;

}
