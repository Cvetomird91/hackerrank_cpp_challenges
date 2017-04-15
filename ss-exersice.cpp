#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

   string token;
   stringstream ss(str);
   vector<int> output;
/*
   vector<int>::iterator it;
   it = output.begin();

  int i = 0;
  int x;
  while(ss >> x) {
    //array[i] = x;
    //i++;
    output.push_back(x);
  }
*/

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
  /*
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
   */

    return 0;
}
