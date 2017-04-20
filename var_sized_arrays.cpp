#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include <string>
#include <sstream>

using namespace std;

typedef vector< vector<int> > jaggedArray;

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

void fillJaggedArray(const string& arrayNumbers[], jaggedArray& matrix, const int& arrayCount) {

    for (int i; i < arrayCount; i++) {
        getline(cin, arrayNumbers[i]);
        vector<int> temp = createVectorArray(arrayNumbers[i]);
        matrix.push_back(temp);
    }
}

int queryJaggedArray(string queries[], const jaggedArray& matrix) {
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

	//refactor as fillJaggedArray
    for (int i; i < arrayCount; i++) {
        getline(cin, arrayNumbers[i]);
        vector<int> temp = createVectorArray(arrayNumbers[i]);
        matrix.push_back(temp);
    }

    for (int i = 0; i < queryCount; i++) {
        getline(cin, queries[i]);
    }

	//refactor as queryJaggedArray
    for (int i = 0; i < queryCount; i++) {
        int col, row;
        stringstream ss(queries[i]);
        ss >> col >> row;

        cout << matrix[col][row] << endl;
    }

    return 0;

}
