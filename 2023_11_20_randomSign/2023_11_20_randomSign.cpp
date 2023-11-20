#include <iostream>
#include <ctime>

int main()
{
    srand((int)time(NULL));

    for (int i = 0; i < 100; i++) {
        printf("%2d ", (rand() % 2 * 2 - 1));
    }

    return 0;
}