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
    memcpy(array2, array + 5, 10U / 2);
    memcpy(array2, array + 5, 5 - 2L);
    memcpy(array2, array + 5, 5U + 2L);
    memcpy(array2, array + 5, 5UL % 2L);
    memcpy(array2, array + 5, 5 > 2UL);
    memcpy(array2, array + 5, 5LL == 2);
    memcpy(array2, array + 5, 5LL | 2L);
    memcpy(array2, array + 5, 5UL & 2LL);
    memcpy(array2, array + 5, 5ULL ^ 2LL);
    memcpy(array2, array + 5, 5ULL && 2);
    memcpy(array2, array + 5, 5U || 2LL);
    //memcpy(array2, array + 5, true * 2LL);

    return EXIT_SUCCESS;
}
