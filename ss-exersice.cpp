#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

  string token;
  stringstream ss(str);
  vector<int> output;

  while(getline(ss, token, ',')) {
    output.push_back(stoi(token));
  }

  return output;

}

int main() {
    string str;
    cin >> str;

    vector<int> numbers = parseInts(str);

    cout << numbers.at(0) << endl;

    return 0;
}
