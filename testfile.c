#include <stdlib.h>
#include <string.h>


int main(void)
{
    int array[15];
    int array2[15];

    for (int i = 0; i < 15; ++i) {
        array[i] = i + 1;
        array2[i] = 0;
    }

    memcpy(array2, array + 5, 5 * 2);
    memcpy(array2 + 8, array, 5 + 2);
    int x = 1, y = 2;
    memcpy(array, array2 + 10, x + y);
    memcpy(array, array2 + 12, x = y);
    memcpy(array2, array + 2, x = 7);
    memcpy(array, array2, y * 5);
    memcpy(array, array2, 5 * y);
    memcpy(array, array2, y | 5);
    memcpy(array, array2, x | y);
    memcpy(array, array2, 8 - y);
    memcpy(array, array2, x - y);
    memcpy(array, array2, 10 / 2);

    return EXIT_SUCCESS;
}
