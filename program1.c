#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("int    : size = %u bytes, Min = %d, Max = %d\n",
           sizeof(int), INT_MIN, INT_MAX);
    printf("float  : size = %u bytes, Min = %e, Max = %e\n",
           sizeof(float), FLT_MIN, FLT_MAX);
    printf("double : size = %u bytes, Min = %e, Max = %e\n",
           sizeof(double), DBL_MIN, DBL_MAX);
    printf("char   : size = %u bytes, Min = %d, Max = %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);
    return 0;
}
