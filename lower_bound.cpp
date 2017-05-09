#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

    int n, q;
    vector<int> numbers;
    std::cin >> n;
    int j;
    for (int i = 0; i < n; i++) {
        std::cin >> j;
        numbers.push_back(j);
    }
    
	std::cin >> q;
    int query, position;
    vector<int>::iterator it;
    for (int i = 0; i < q; i++) {
        std::cin >> query;
        it = std::find(numbers.begin(), numbers.end(), query);

        if(it != numbers.end()) {
            position = distance(numbers.begin(), it);
            position++;
            std::cout << "Yes " << position << std::endl;
        } else {
            it = std::lower_bound (numbers.begin(), numbers.end(), query);
            position = distance(numbers.begin(), it);
            position++;
            std::cout << "No " << position << endl;
        }

    }
    
    return 0;

}

/*

8
1 1 2 2 6 9 9 15
4
1
4
9
15

Yes 1
No 5
Yes 6
Yes 8

*/
