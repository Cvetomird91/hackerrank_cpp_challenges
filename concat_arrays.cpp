#include <iostream>

template <typename T>
int* concatArrays( T& array_1, T& array_2) {
	int arrayCount_1 = sizeof(array_1) / sizeof(array_1[0]);
	int arrayCount_2 = sizeof(array_2) / sizeof(array_2[0]);
	int newArraySize = arrayCount_1 + arrayCount_2;

	int *p = new int[newArraySize];

	for (int i; i < arrayCount_1; i++)
		p[i] = array_1[i];

	for (int i = arrayCount_1; i < (arrayCount_1 + arrayCount_2); i++)
		p[i] = array_2[i-arrayCount_2];

	return p;

}

int main() {

	int ary[3] = {1, 2, 3};
	int anotherAry[3] = {4, 5, 6};

	int *r = concatArrays(ary, anotherAry);

	std::cout << *(r + 4) << std::endl;

	delete r;

	return 0;

}
