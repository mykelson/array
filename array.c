#include <stdio.h>

int main(void)
{
    int foo[5] = {1,2,3,4,5};
    int bar[5];

    // populate bar using foo elements.
    for (int i = 0; i < 5; i++)
    {
        bar[i] = foo[i];
        printf(bar[i]);
    }
    
    return 0;
}