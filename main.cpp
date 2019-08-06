
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
    float f;
    double df;
    long double ldf;

    printf("size of float f is %ld bits\n", sizeof(f) * byte);
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);
    f = 500.0;
    printf("value of f , %f\n", f);
    f = 5e20;
    printf("value of f , %f\n", f);
    // value of f , 500000010020438671360.000000
    df = 5e20;
    printf("value of df , %lf\n", df);
    // value of df , 500000000000000000000.000000

    return 0;
}
