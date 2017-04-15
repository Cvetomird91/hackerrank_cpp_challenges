#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
 
/*
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 32 bit integer (same as Int for modern systems)
    Long Long ("%lld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
*/


int main() {

    //string input = "3 444 12345678912345 a 334.23 14049.30493";
    //int, long, long long, char, float, and double

    int i;
    long longNumber;
    long long longLongNumber;
    char c;
    float flt;
    double dbl;

    scanf("%d %ld %lld %c %f %.2lf", &i, &longNumber, &longLongNumber, &c, &flt, &dbl);

    cout << i << endl;
    cout << longNumber << endl;
    cout << longLongNumber << endl;
    cout << c << endl;
	printf("0.5f", flt);
	printf("0.5lf", dbl);

    return 0;
}

/*
458873627
670540352
37274594125879112
g
-79720.555
7441739.542437971

458873627 670540352 37274594125879112 g -79720.555 7441739.542437971

368252310 926019709 27547295356575738 c 46886.25 -247884.491885257

368252310
926019709
27547295356575738
c
46886.250
-247884.491885257
*/
