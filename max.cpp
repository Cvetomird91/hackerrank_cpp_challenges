#include <stdio.h>
#include <iostream>

using namespace std;

//17 13 3 15
//6 13 9 10

int max_of_four(int a, int b, int c, int d) {
	int max;
	max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;

	return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
	//cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;

}
