#include <iostream>
#include <sstream>
#include <map>

using namespace std;

const int insert = 1;
const int insertStudentOnly = 2;
const int printMark = 3;

int main() {

    int n;
    map<string, int> marks;
    string query;

    cin >> n;
    cin.ignore(1, '\n');
	
    for (int i = 0; i < n; i++) {
        getline(cin, query);
        stringstream ss(query);

        int type, grade;
        string student;

        ss >> type >> student >> grade;

        if (type == insert) {
            marks[student] += grade;
        }

        if (type == insertStudentOnly) {
            marks[student] = 0;
        }

        if (type == printMark) {
            cout << marks[student] << endl;
        }

    }

    return 0;

}
