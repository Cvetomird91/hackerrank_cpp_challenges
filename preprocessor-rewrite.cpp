#define INF 100000000
#define foreach

#include <iostream>
#include <vector>

using namespace std;

/*
 * I rewrote the condition of the preprocessor C++ challenge to have a better look at
 * the logic that was to be created with the preprocessor directives
 */

int minimum(int &min, int number) { min = (number<min)?number:min; }
int maximum(int &max, int number) { max = (number>max)?number:max; }

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}

	int mn = INF;
	int mx = -INF;

	for(int i = 0; i < v.size(); i++) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}

	int ans = mx - mn;
	cout << "Result = " << ans;
	return 0;

}
