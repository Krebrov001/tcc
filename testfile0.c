#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int array[15];
    int array2[15];

    for (int i = 0; i < 15; ++i) {
        array[i] = i + 1;
        array2[i] = 0;
    }

    bool flag = 1;
    char cval = 2;
    short sval = 3;
    unsigned short usval = 4;
    int ival = 5;
    unsigned int uival = 6;
    long lval = 7;
    unsigned long ulval = 8;
    float fval = 9.1;
    double dval = 10.2;

    memcpy(array2, array + 5, 5 * 2);
    memcpy(array2, array, '\0' + 2);

    memcpy(array2, array, 3.14159L + 'a');
    memcpy(array2, array, dval + ival);
    memcpy(array2, array, dval + fval);
    memcpy(array2, array, flag + uival);
    memcpy(array2, array, flag + dval);
    memcpy(array2, array, cval + fval);
    memcpy(array2, array, sval + cval);
    memcpy(array2, array, cval + lval);
    memcpy(array2, array, ival + uival);
    memcpy(array2, array, usval + ival);
    memcpy(array2, array, uival + lval);

    return EXIT_SUCCESS;
}
